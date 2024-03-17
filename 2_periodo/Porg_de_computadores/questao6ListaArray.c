/*Escrever para cada item abaixo um programa em C que preencha um array [SIZE = 100] com valores inteiros
aleatórios (rand/srand) no intervalo entre [10, 99]. Após isso, faça:
6. Exibir na tela a quantidade de vezes que aparece o número 3.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void sortear (int *p);
void numero3 (int *g);

int main (void) {
    srand(time(NULL));
    
    int valores [101];
    sortear (valores);
    
    int n;
    for (n = 0; n < 100 ; n++) {
        printf(" %d", valores[n]);
    }
    
    numero3(valores);
    
    
    
    system("pause");
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

void numero3 (int *g) {
	int i, quantidadeDe3 = 0;
	for (i = 0; i < 100 ; i ++) {
		if (g[i] / 10 == 3) {
			quantidadeDe3++;
		}
		if (g[i] % 10 == 3) {
			quantidadeDe3++;
		}
	}
	
	printf("\nNumero de vezes que o 3 apareceu: %d\n", quantidadeDe3);
}

