/*Exemplo 1: Distância entre os pontos cartesianos:   P  e   Q .
Distancia entre   P(Px,Py)  e   Q(Qx,Qy)  =  √( (Px−Qx)^2+(Py−Qy)^2 )*/

#include <stdio.h>
#include <math.h>

double distanciaCartesiana(int Px, int Py, int Qx, int Qy);

int main(void)
{
    int Px, Py, Qx, Qy;
    printf("Digite a posição de P no plano cartesiano (x e y):\n");
    scanf("%d", &Px);
    scanf("%d", &Py);
    printf("\nDigite a posição de Q no plano cartesiano (x e y):\n");
    scanf("%d", &Qx);
    scanf("%d", &Qy);
    
    double DC = distanciaCartesiana(Px, Py, Qx, Qy);
    
    printf("\nResultado: %lf", DC);
    return 0;
}

double distanciaCartesiana(int Px, int Py, int Qx, int Qy) {
    int a = (Px - Qx)*(Px - Qx);
    int b = (Py - Qy)*(Py - Qy);
    double c = sqrt(a + b);
    return c;
}

/*Exemplo 2: Fatorial(n):

n = 0 ou 1 Fat(0 ou 1) = 1

n >= 2 Fat(n >= 2) = 1 * 2 * 3 * ...* n

Arranjo:

Combinação:

*/

#include <stdio.h>
#include <math.h>

int fatorial (int x);
double arranjo (int n, int p);
double combinacao (int n, int k);


int main(void)
{
    int f, arranjoN, arranjoP, combinacaoN, combinacaoK;
    double arjo, comb;
    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &f);
    f = fatorial(f);
    printf("\n%d", f);
    
    printf("\n\nDigite dois números para calcular o arranjo entre eles: \n");
    scanf("%d", &arranjoN);
    scanf("%d", &arranjoP);
    arjo = arranjo(arranjoN, arranjoP);
    printf("%.2f", arjo);
    
    printf("\n\nDigite dois números para calcular a combinação entre eles: \n");
    scanf("%d", &combinacaoN);
    scanf("%d", &combinacaoK);
    comb = combinacao(combinacaoN, combinacaoK);
    printf("%.2f", comb);
    
    return 0;
}

int fatorial (int x) {
    int resultado = 1;
    for(int i = 2; i <= x; i++) {
        resultado *= i;
    }
    return resultado;
}

double arranjo(int n, int p) {
    int a = fatorial (n);
    int b = fatorial (n- p);
    double resultado = a / b;
    return resultado;
}

double combinacao(int n, int k) {
    double a = arranjo(n, k);
    int b = fatorial (k);
    double resultado = a / b;
    return resultado;
}

/*EXEMPLO 3: Função para estabelecer os índices de Saúde.
CÉLULA 1: Declaração da Função: Índices de Saúde.
ARGUMENTO:
Parâmetros de entrada:

Massa: em quilogramas;
Altura: em metros;
Medida da Cintura: em centímetros;
Medida do Quadril: em centímetros;
Desenvolver as seguintes funções (e seus respectivos protótipos), a saber:

Índices de Saúde implementa como objetivo determinar

Os parâmetros de referência de saúde com os seguintes indicadores, a saber:

PROTÓTIPO 1: RCQ (%): Relação Cintura-Quadril = RCQ=(MedidadaCintura/MedidadoQuadril)∗100

PROTÓTIPO 2: IMC: Índice de Massa Corpórea = Massa / Altura2

PROTÓTIPO 3: Classificação por IMC, sendo:

1: "MAGREZA": IMC < 18.5
2: "PESO NORMAL": IMC < 25
3: "SOBREPESO": IMC < 30
4: "OBESIDADE GRAU I": IMC < 35
5: "OBESIDADE GRAU II": IMC < 40
6: "OBESIDADE GRAU III": IMC >= 40
*/

#include <stdio.h>
#include <math.h>

double RCQ (float cintura, float quadril);
double IMC (float massa, float altura);

int main(void)
{
    float massa, altura, cintura, quadril;
    printf("\tResponda as seguintes perguntas\n");
    printf("Digite sua massa (kg): ");
    scanf("%f", &massa);
    printf("Digite sua altura (m): ");
    scanf("%f", &altura);
    printf("Digite a medida da sua cintura (cm): ");
    scanf("%f", &cintura);
    printf("Digite a medida do seu quadril (cm): ");
    scanf("%f", &quadril);

    printf("\n\tÍndices de Saúde\n");
    printf("Relação Cintura-Quadril: %.0lf%%", RCQ(cintura, quadril));
    double imc = IMC(massa, altura);
    printf("\nÍndice de Massa Corpórea: %.2lf", imc);
    
    int resultado;
    if(imc < 18.5) {
        resultado = 1;
    } else if(imc < 25) {
        resultado = 2;
    } else if(imc < 30) {
        resultado = 3;
    } else if(imc < 35) {
        resultado = 4;
    } else if(imc < 40) {
        resultado = 5;
    } else {
        resultado = 6;
    }
    
    switch (resultado) {
        case 1: 
            printf("\nClassificação por IMC: MAGREZA");
            break;
        case 2: 
            printf("\nClassificação por IMC: PESO NORMAL");
            break;
        case 3: 
            printf("\nClassificação por IMC: SOBREPESO");
            break;
        case 4: 
            printf("\nClassificação por IMC: OBESIDADE GRAU I");
            break;
        case 5: 
            printf("\nClassificação por IMC: OBESIDADE GRAU II");
            break;
        case 6: 
            printf("\nClassificação por IMC: OBESIDADE GRAU III");
            break;
        default:
            printf("\nErro");
            break;
    }
    
    return 0;
}

double RCQ(float cintura, float quadril) {
    double resultado = (cintura/quadril)*100;
    return resultado;
}

double IMC(float massa, float altura) {
    double resultado = massa / (altura*altura);
    return resultado;
}

/*Exemplo 4: Função Número Perfeito:*/

#include <stdio.h>
#include <math.h>

void verificadorNumPerfeito(int a);

int main (void)
{
    int x;
    printf("Digite um número: ");
    scanf("%d", &x);
    verificadorNumPerfeito(x);
    
    return 0;
}

void verificadorNumPerfeito(int a) {
    int y = 1;
    
    
        printf("\nDivisores naturais: 1 ");
        for (int i = 2; i < a; i++) {
            if( a % i == 0) {
                printf("+ %d ", i);
                y += i;
            }
        }
    
    printf("= %d", y);
    if(y == a) {
        printf("\nnúmero perfeito");
    } else {
        printf("\nnúmero não perfeito");
    }
    
}

/*Exemplo 4.2: Função Número Perfeito:*/

#include <stdio.h>
#include <math.h>

void verificadorNumPerfeito(int a);

int main (void)
{
    int x;
    for (int i = 2; i < 10000; i++) {
        verificadorNumPerfeito(i);
    }
    
    return 0;
}

void verificadorNumPerfeito(int a) {
    int y = 1;
    
    
        for (int i = 2; i < a; i++) {
            if( a % i == 0) {
                
                y += i;
            }
        }
    
    
    if(y == a) {
        printf("\nnúmero perfeito: %d", y);
    }
    
}
