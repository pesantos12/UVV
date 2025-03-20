#include <LiquidCrystal_I2C.h>
#include <Keypad.h>

// CONFIGURAÇÃO DO SENSOR
#define SENSOR_PIN A0  
// Esses valores são de calibração para mapear a leitura analógica em % de umidade
#define SENSOR_SECO 750   // valor para condição "seca"
#define SENSOR_MOLHADO 350 // valor para condição "molhado"

// VALORES PADRÃO DOS LIMITES (em %)
#define DEFAULT_SECO 25
#define DEFAULT_UMIDO 75

// Variáveis globais para os limites, iniciando com os valores padrão
int limiteSeco = DEFAULT_SECO;
int limiteUmido = DEFAULT_UMIDO;

// CONFIGURAÇÃO DO LCD I2C
LiquidCrystal_I2C lcd(0x27, 16, 2);  // Verifique se o endereço do módulo é 0x27 (ou 0x3F)

// CONFIGURAÇÃO DO TECLADO 4x4
const byte ROWS = 4; 
const byte COLS = 4; 
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
// Pinos conectados às linhas e colunas do teclado
byte rowPins[ROWS] = {6, 7, 8, 9};
byte colPins[COLS] = {10, 11, 12, 13};
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

// Variáveis para o modo de configuração
bool configMode = false;
int configStep = 0; // 1 = aguardando limite seco; 2 = aguardando limite úmido
String inputString = "";
int newDry, newWet;
unsigned long configTimer = 0;
const unsigned long configTimeout = 10000; // 10 segundos de inatividade para cancelar a configuração

void setup() {
  Serial.begin(9600);
  pinMode(SENSOR_PIN, INPUT);

  // Inicializa o LCD
  lcd.init();
  lcd.backlight();
  
  // Exibe a mensagem inicial com os valores padrão
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Arq. Org. II");
  lcd.setCursor(0, 1);
  lcd.print("Seco:25 Umid:75");
}

void loop() {
  // Verifica se alguma tecla do teclado foi pressionada
  char key = keypad.getKey();
  if (key) {
    // Se não estiver em modo de configuração, usar a tecla "*" para entrar no modo
    if (!configMode) {
      if (key == '*') {
        configMode = true;
        configStep = 1; // primeiro, configurar o limite seco
        inputString = "";
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Configurar");
        lcd.setCursor(0, 1);
        lcd.print("Lim Seco:");
        configTimer = millis(); // reinicia o timer
      }
    } else {
      // Estamos em modo de configuração
      if (key >= '0' && key <= '9') {
        // Concatena dígitos à entrada
        inputString += key;
        // Exibe a entrada atual na linha 1 (após o texto)
        lcd.setCursor(10, 1);
        lcd.print(inputString);
        configTimer = millis(); // reinicia o timer a cada tecla digitada
      } else if (key == '#') { // tecla de confirmação
        if (inputString.length() > 0) {
          if (configStep == 1) {
            newDry = inputString.toInt();
            // Passa para configurar o limite úmido
            configStep = 2;
            inputString = "";
            lcd.clear();
            lcd.setCursor(0, 0);
            lcd.print("Configurar");
            lcd.setCursor(0, 1);
            lcd.print("Lim Umid:");
            configTimer = millis();
          } else if (configStep == 2) {
            newWet = inputString.toInt();
            // Valida os valores: o seco deve ser menor que o úmido e a diferença >= 10%
            if (newDry < newWet && (newWet - newDry) >= 10) {
              limiteSeco = newDry;
              limiteUmido = newWet;
              lcd.clear();
              lcd.setCursor(0, 0);
              lcd.print("Atualizado!");
              lcd.setCursor(0, 1);
              lcd.print("Seco:");
              lcd.print(limiteSeco);
              lcd.print(" Umid:");
              lcd.print(limiteUmido);
              delay(2000);
            } else {
              lcd.clear();
              lcd.setCursor(0, 0);
              lcd.print("Erro nos vals");
              lcd.setCursor(0, 1);
              lcd.print("Tente novamente");
              delay(2000);
            }
            // Sai do modo de configuração
            configMode = false;
            configStep = 0;
            inputString = "";
            lcd.clear();
            lcd.setCursor(0, 0);
            lcd.print("Arq. Org. II");
            lcd.setCursor(0, 1);
            lcd.print("Seco:");
            lcd.print(limiteSeco);
            lcd.print(" Umid:");
            lcd.print(limiteUmido);
          }
        }
      } else if (key == '*') {
        // Se pressionar "*" novamente, cancela a configuração
        configMode = false;
        configStep = 0;
        inputString = "";
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Config cancel.");
        delay(1500);
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Arq. Org. II");
        lcd.setCursor(0, 1);
        lcd.print("Seco:");
        lcd.print(limiteSeco);
        lcd.print(" Umid:");
        lcd.print(limiteUmido);
      }
    }
  }
  
  // Se estiver em modo de configuração e passar tempo sem entrada, cancela
  if (configMode && (millis() - configTimer > configTimeout)) {
    configMode = false;
    configStep = 0;
    inputString = "";
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Timeout");
    delay(1500);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Arq. Org. II");
    lcd.setCursor(0, 1);
    lcd.print("Seco:");
    lcd.print(limiteSeco);
    lcd.print(" Umid:");
    lcd.print(limiteUmido);
  }

  // Se não estiver no modo de configuração, executa a leitura do sensor
  if (!configMode) {
    int leitura = analogRead(SENSOR_PIN);
    // Mapeia a leitura para % de umidade usando os valores calibrados
    int umidade = map(leitura, SENSOR_SECO, SENSOR_MOLHADO, 0, 100);
    umidade = constrain(umidade, 0, 100);
    
    // Exibe a umidade e o status na tela
    lcd.setCursor(0, 0);
    lcd.print("Umid:");
    lcd.print(umidade);
    lcd.print("%   ");
    
    lcd.setCursor(0, 1);
    if (umidade < limiteSeco) {
      lcd.print("Regando      ");
    } else if (umidade > limiteUmido) {
      lcd.print("Encharcado   ");
    } else {
      lcd.print("Normal       ");
    }
    delay(500);
  }
}
