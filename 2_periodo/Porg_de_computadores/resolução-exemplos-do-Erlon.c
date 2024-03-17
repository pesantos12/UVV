/*EXEMPLO 1:
Exibir na tela, contagem progressiva e
regressiva, os números PARES entre [0, 100].*/

#include <stdio.h>

int main(void)
{
    printf("\n\tContagem progressiva: \n\n");
    for(int i = 2; i <= 100; i += 2){
        printf(" %i ",i);
    }
    printf("\n\n\tContagem progressiva: \n\n");
    for(int i = 100; i > 0; i -= 2) {
        printf(" %i ", i);
    }
    
    return 0;
}

/*EXEMPLO 2: 
Enumerar e exibir na tela todas as sugestões de senhas numéricas
de 4 digitos com a seguinte "criptografia fraca":
-> ÍMPARES e (AND) MÚLTIPLAS DE 39.
VALOR INICIAL.           : START : 1000
VALOR FINAL              : STOP  : 9999*/

#include <stdio.h>

int main(void)
{
    for (int senha = 1000; senha < 9999; senha++){
        if (senha % 39 == 0 && senha % 2 == 1) {
            printf("criptografia fraca: %d\n", senha);
        }
    }
    
    return 0;
}


/*EXEMPLO 3: 
Enumerar e exibir na tela os números ímpares entre [X,  X3 ]. 
Onde X é um valor >= 1 lido do usuário.

VALOR INICIAL - START: X

VALOR FINAL - STOP:  X3
*/
#include <stdio.h>

int main(void)
{  
    int x, contador;
    printf("Digite um valor: ");
    scanf("%d", &x);
    contador = x;
    printf("%i ", contador);
    while (contador < x*x*x - 1) {
        if (contador % 2 == 1) {
            contador += 2;
        } else {
            contador += 1;
        }
        printf("%d ", contador);
    } 
    if(x*x*x % 2 == 0) {
        printf("%d", x*x*x);
    }
    
    return 0;
}


/*EXEMPLO 4:
Enumerar e exibir na tela os números ímpares E não múltiplos de 5 entre  [X+Y ,  X2  +  Y2 ].
Onde X e Y são valores >= 1 lido do usuário.
VALOR INICIAL: X + Y
VALOR FINAL. :  X2  +  Y2 
Exibir também a SOMA e a MÉDIA dos valores.*/

#include <stdio.h>
#include <math.h>

int main(void)
{  
    int X, Y, Vi, Vf, contador = 0;
    float a = 0;
    printf("Digite dois valores inteiros: \n");
    scanf("%d", &X);
    scanf("%d", &Y);
    Vi = X + Y;
    Vf = pow(X, 2) + pow(Y, 2);
    for(int i = Vi; i < Vf; i++) {
        if(i % 2 == 1 && i % 5 != 0) {
            printf("%d ", i);
            contador += i;
            a++;
        }
    }
    printf("\nSoma de todos os valores: %d.\nMédia de todos os valores %.2f.", contador, contador/a);
    
    return 0;
}

/*EXEMPLO 5:
Enumerar e exibir na tela todas as sugestões de senhas numéricas
de 4 digitos (DISTINTOS ENTRE SI: NÃO REPETIDOS) com a seguinte "criptografia fraca":

-> ÍMPARES e (AND) MÚLTIPLAS DE 39.

VALOR INICIAL.           : 1000
VALOR FINAL (não incluso): 9999*/

#include <stdio.h>

int main(void)
{
    for (int senha = 1000; senha < 9999; senha++){
        if (senha % 39 == 0 && senha % 2 == 1) {
            int a, b, c, d;
            a = senha / 1000;
            b = (senha % 1000) / 100;
            c = (senha % 100) / 10;
            d = senha % 10;
            if(a != b && a != c && a != d && b != c && b != d && c != d) {
                printf("%d\n", senha);
            }
        }
    }
    
    return 0;
}

/*EXEMPLO 6:
Ler a nota[0, 10] de 50 alunos (CONDIÇÃO - STOP: VALOR FINAL) de uma turma
e exibir sua a média geral.
Média = Soma as Notas de todos / Alunos*/

#include <stdio.h>

int main(void)
{
    float notas = 0, i;
    int alunos = 0;
    while (alunos < 50) {
        printf("Digite a nota do aluno: ");
        scanf("%f", &i);
        notas += i;
        alunos++;
    } 
    printf("\nA média da turma é de: %.2f", notas / alunos);
    
    return 0;
}

/*EXEMPLO 7:
Ler a opinião de 1000 entrevistados (CONDIÇÃO - STOP: VALOR FINAL) sobre a seguinte questão:
Você confia no Técnico Vitor Pereira? 1: SIM ou 0: NÃO
Exiba o resultado da pesquisa em porcentagem(%)
-> Como calcular a Porcentagem?
% Parte = Parte / Total * 100
% sim = 100.0 * sim / (sim + nao)
% nao = 100.0 * nao / entrevistados*/

#include <stdio.h>

int main(void)
{
    float sim, nao;
    int voto, entrevistados = 0;
    while (entrevistados < 1000) {
    printf("Você confia no Técnico Vitor Pereira? 1: Sim ou 0: Não\n");
    scanf("%d", &voto);
        if(voto == 1) {
            sim += 1;
        } else {
            nao += 1;
        }
    entrevistados++;
    }
    printf("\nPessoas que votaram Sim: %.0f%% \nPessoas que votaram Não: %.0f%% \nTotal de entrevistados: %d", 100.0*(sim/entrevistados), 100.0*(nao/entrevistados), entrevistados);
    return 0;
}

/*EXEMPLO 8:
Ler o voto de 100 moradores para síndico do prédio.
Os cadidatos são:

CRIAR UM MENU DE OPÇÕES:

1: Fulano de Tal
2: Beltrano de Tal
3: Cicrano de Tal

Exiba o resultado da votação em porcentagem(%)
fulano   = ?
beltrano = ?
cicrano  = ?*/

#include <stdio.h>

int main(void)
{
    float F, B, C;
    int voto, moradores = 0;
    while (moradores < 100) {
    printf("Vote para o síndico do prédio:\n1: Fulano de Tal \n2: Beltrano de Tal \n3: Cicrano de Tal\n");
    scanf("%d", &voto);
        if(voto == 1) {
            F += 1;
        } else if (voto == 2) {
            B += 1;
        } else {
            C += 1;
        }
    moradores++;
    }
    printf("\nResultado:\nFulano: %.0f%% \nBeltrano: %.0f%% \nCiclano: %.0f%%", 100.0*(F/moradores), 100.0*(B/moradores), 100.0*(C/moradores));
    return 0;
}


/*EXEMPLO 9:
Ler a opinião de VÁRIOS entrevistados sobre a seguinte questão:

Você confia no Técnico Vitor Pereira? 1: SIM ou 2: NÃO

Exiba o resultado da pesquisa em porcentagem(%)

PARE o programa quando o usuário digitar ZERO ((CONDIÇÃO - STOP: BREAK))

-> Como calcular a Porcentagem?
% Parte = Parte / Total * 100
% sim = 100.0 * sim / (sim + nao)
% nao = 100.0 * nao / entrevistados*/

#include <stdio.h>

int main(void)
{
    float sim, nao;
    int voto, entrevistados, i = 1;
    do {
    printf("Você confia no Técnico Vitor Pereira? 1: Sim ou 2: Não\n");
    scanf("%d", &voto);
        if(voto == 0) {
            i = 0;
        }
        if(voto == 1) {
            sim += 1;
            entrevistados++;
        } else if (voto == 2){
            nao += 1;
            entrevistados++;
        }
    } while (i != 0);
    printf("\nPessoas que votaram Sim: %.0f%% \nPessoas que votaram Não: %.0f%% \nTotal de entrevistados: %d", 100.0*(sim/entrevistados), 100.0*(nao/entrevistados), entrevistados);
    return 0;
}

/*EXEMPLO 10:
Escrever um algoritmo em C que leia VÁRIOS números reais (float) - TEMPERATURA ºC -  e exiba na tela:

-> Média dos números Positivos = Soma de números positivos / Quantidade de números positivos
-> Média dos números Negativos = Soma de números negativos / Quantidade de números negativos

Parar (BREAK) o programa quando o usuário digitar ZERO.*/

#include <stdio.h>

int main(void)
{
    int quantidadeN, quantidadeP;
    float P, N, i;
    do {
        printf("Digite um valor: ");
        scanf("%f", &i);
        if(i > 0) {
            P += i;
            quantidadeP++;
        } else if (i < 0) {
            N += i;
            quantidadeN++;
        }
        
    } while (i != 0);
    printf("\nMédia dos números positivos: %.2f \nMédia dos números negativos: %.2f", P / quantidadeP, N / quantidadeN);
    
    return 0;
}

/*EXEMPLO 11:
Escrever um programa em C que leia a matrícula e o tempo (em minutos) prova de 50 (STOP) atletas
que participaram das 10 Milhas Garoto.
Exibir na tela a matrícula e o tempo (em minutos):
-> VENCEDOR
-> LANTERNA
entre todos os atletas.*/

#include <stdio.h>

int main(void)
{
    int matricula = 0, vencedorM;
    float tempo = 0, vencedorT, novoTempo;
    for (int i = 0; i < 4; i++) {
        printf("Digite sua matrícula: ");
        scanf("%d", &matricula);
        printf("Digite o tempo de prova: ");
        scanf("%f", &tempo);
        if (tempo > novoTempo) {
            vencedorT = tempo;
            vencedorM = matricula;
        } 
        
        
        novoTempo = tempo;
    } printf("Vencedor: %d,", vencedorT);
    
    return 0;
}
