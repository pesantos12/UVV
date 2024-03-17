/*Exemplo 1: Seleção Simples (IF)
Escrever um algoritmo em C que leia o Preço (R$) e a quantidade (unidades) de uma (1) Mercadoria e
exiba o total a pagar. Entranto, SE (IF) o total a pagar ultrapassar R$ 1000.00 dê 3% desconto ao cliente.*/

#include <stdio.h>

int main(void)
{
    float preco, total;
    int quantidade;
    printf("Digite o preço do produto: ");
    scanf("%f", &preco);
    printf("Digite a quantidade do produto: ");
    scanf("%d", &quantidade);
    total = preco*quantidade;

    if(total > 1000.00) {
        total *= 0.97;
    }
    printf("O valor total a pagar é de R$ %.2f", total);
}


/*Exemplo 2: Seleção Composta (IF - ELSE)
Escrever um algoritmo que teste uma(1) senha NUMÉRICA lida do usuário e a classifique como:
⟼  Senha Forte: Se for ÍMPAR E NÃO MÚLTIPLA DE 17
⟼  Senha Fraca: caso contrário.*/

#include <stdio.h>

int main(void)
{
    int senha;
    printf("Digite sua senha: ");
    scanf("%d", &senha);
    
    if((senha % 2 == 1) && (senha % 17 >= 1)) {
        printf("Sua senha é forte.");
    } else {
        printf("Sua senha é fraca.");
    }
}


/*Exemplo 3: Seleção Composta (IF - ELSE)
Escrever um algoritmo que leia a nota [0-10] do 1º e 2º Bimetre de um (1) aluno
e exibir a sua média semestral final com sua classificação (Status), a saber:
-> Nota Semestral Final: [0, 5[ => Aluno Status: Reprovação.
-> Nota Semestral Final: [5, 10] => Aluno Status: Aprovação.*/

#include <stdio.h>

int main(void)
{
    float notab1, notab2, media;
    printf("Digite a nota do 1º e 2º Bimetre:\n");
    scanf("%f %f", &notab1, &notab2);
    media = (notab1 + notab2)/2;
    
    if(media >= 5) {
        printf("Status: Aprovado");
    } else {
        printf("Status: Reprovado");
    }
}



/*Exemplo 4: Seleção Encadeada (IF - ELSE IF - ELSE)
ENUNCIADO DO EXEMPLO: Notas da UVV
 Escrever um algoritmo que leia a nota do 1º e 2º Bimestre de um (1) aluno e
 exibir a sua média semestral (MS) com sua classificação (Status), a saber:
-> Nota Semestral      : [0, 3[ => Aluno Status: Reprovação.
-> Nota Semestral Final: [3, 7[ => Aluno Status: Prova Final.
    -> Ler [0, 10] a nota da Prova Final e exibir o Status:
       -> [0, 5[: Status: Reprovação.
       -> [5, 10]: Status: Aprovação.
-> Nota Semestral Final: [7, 10] => Aluno Status: Aprovação.*/

#include <stdio.h>

int main(void)
{
    float notab1, notab2, media, pf;
    printf("Digite a nota do 1º e 2º Bimetre:\n");
    scanf("%f %f", &notab1, &notab2);
    media = (notab1 + notab2)/2;
    
    if(media >= 0 && media <= 3) {
        printf("Status: Reprovado");
    } else if (media < 7) {
        printf("Digite a nota da prova final:\n");
        scanf("%f", &pf);
        if(pf < 5) {
            printf("Status: Reprovado");
        } else {
            printf("Status: Aprovado");
        }
    } else {
        printf("Status: Aprovado");
    }
}
case 'A': case 'a':

// EXERCÍCIOS DO ERLON

/*a) Cálculo da hipotenusa*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float A, B, C;
    printf("Digite um Cateto:\n");
    scanf("%f", &B);
    printf("Digite outro Cateto:\n");
    scanf("%f", &C);
    
    A = sqrt((B*B) + (C*C));
    printf("%.2f", A);
}

/*b) Cálculo da área do quadrado*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float L, area;
    printf("Digite o lado do quadrado:\n");
    scanf("%f", &L);
    
    area = L*L;
    printf("%.2f", area);
}

/*c) Cálculo da área de um retângulo*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float L, area, H;
    printf("Digite o lado do retângulo:\n");
    scanf("%f", &L);
    printf("Digite a altura do retângulo:\n");
    scanf("%f", &H);
    
    area = L*H;
    printf("%.2f", area);
}

/*d) Cálculo da área e comprimento de um círculo*/

#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(void)
{
    float R, area, comprimento;
    double pi;
    printf("Digite o raio do círculo:\n");
    scanf("%f", &R);
    comprimento = 2*PI*R;
    area = R*R*PI;
    printf("Área = %.2f \nComprimento = %.2f", area, comprimento);
}

/*e) Cálculo do IMC, h em m e peso em kg*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    float H, M, IMC;
    printf("Digite o seu peso (em kg):\n");
    scanf("%f", &M);
    printf("Digite a sua altura (em metros):\n");
    scanf("%f", &H);
    IMC = M / (H*H);
    printf("Seu IMC é %.2f", IMC);
}


/*f) Volume em litros de uma esfera*/

#include <stdio.h>
#include <math.h>
#define pi 3.14

int main(void)
{
    float R, V;
    printf("Digite o raio da esfera (em metros): ");
    scanf("%f", &R);
    V = ((3*pi*pow(R, 3))/4)*1000;
    printf("O volume da esfera: %.2f L", V);

    return 0;
}
