/*Escrever para cada item abaixo um programa em C que preencha um array [SIZE = 100] com valores inteiros
aleatórios (rand/srand) no intervalo entre [10, 99]. Após isso, faça:
5. Exibir a média dos termos múltiplos de um 𝑁ú𝑚𝑒𝑟𝑜 (𝑁ú𝑚𝑒𝑟𝑜 ≥ 10) escolhido pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void sortear (int *p);
void encontrarMedia (int *g);

int main (void) {
    srand(time(NULL));
    
    int valores [101];
    sortear (valores);
    
    int n;
    for (n = 0; n < 100 ; n++) {
        printf(" %d", valores[n]);
    }
    
    encontrarMedia (valores);
    
    
    
    //system("pause");
    return 0;
}

void sortear (int *p) {
    int i;
    for (i = 0; i < 100; i++) {
        p[i] = rand() % 100;
        while (p[i] < 10) {
            p[i] = rand() % 100;
        }
    }
}

void encontrarMedia (int *g) {
    int x = 0;
    do {
        printf("\nDigite um valor (>= 10): ");
        scanf("%d", &x);
    } while (x < 10);
    int soma = 0, qntd = 0;
    int j;
    for (j = 0; j < 100; j++) {
        if (g[j] % x == 0 || g[j] % x == 1) {
            soma += g[j];
            qntd++;
        }
    }
    
    double media = soma / qntd;
    
    printf("\nMédia das somas valores multiplos do valor digitado: %.2f", media);
}