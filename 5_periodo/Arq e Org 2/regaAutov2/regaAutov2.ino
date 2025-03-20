/*************************************************
Manual

[06/03/25] - Pedro:
Criação do código com base no vídeo da JuliaLabs.
Testes realizadoes e sensor printando corretamente os valores.
[19/03/25] - Pedro: 
implementação das funcionalidades e ligação do lcd com base no vídeo do Manual do Mundo. 
Necessários testes. 
Dificuldades em relação ao Protobaord.
Observação, precisamos da lógica da escrita e conexão com o teclado urgentemente.


*************************************************/


#include <LiquidCrystal_I2C.h>

#define SENSOR_PIN A0  
#define SECO 750   
#define MOLHADO 350 
#define limiteSeco 25
#define limeiteUmido 75

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(9600);
  pinMode(SENSOR_PIN, INPUT); 
  lcd.init();     
  lcd.backlight();  
  lcd.print(" Arq. Org. II ");
}

void loop() {
  int leitura = analogRead(SENSOR_PIN); 
  
  
  int umidade = map(leitura, SECO, MOLHADO, 0, 100);
  umidade = constrain(umidade, 0, 100);

  lcd.setCursor(0, 1);
  lcd.print("Umidade: ");
  lcd.print(umidade);
  lcd.print(" %    ");
  
  delay(1000);  
}
