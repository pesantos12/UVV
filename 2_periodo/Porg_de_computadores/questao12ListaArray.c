/*Escrever para cada item abaixo um programa em C que preencha um array [SIZE = 10] com valores reais
aleatórios (rand/srand) no intervalo entre [10, 99] com uma (1) casa decimal de precisão. Após isso, faça:
12. Exibir na tela a soma dos termos menores que a média dos termos.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void sortear (double *p);
void somaValoresMenorQMedia (double *l);

int main (void) {
	srand(time(NULL));
	
	double array [10];
	sortear (array);	
	
	int j;
	for (j = 0; j < 10; j++) {
		printf("%.1f   ",array[j]);
	}
	printf("\n");
	
	somaValoresMenorQMedia (array);
	
	system("pause");
	return 0;
}

void sortear (double *p) {
	int i;
	for (i = 0; i < 10; i++) {
		p[i] = (rand() % 100) + (rand() / (double)10000); 
		while (p[i] < 10 || p[i] > 99) {
			p[i] = rand() % 100 + (rand() / (double)10000);
		}
	}
}

void somaValoresMenorQMedia (double *l) {
	int i;
	double soma = 0, media, somaMenores = 0;
	for (i = 0; i < 10; i++) {
		soma += l[i];
	}
	media = soma / 10;
	printf("\nMedia: %.1f\n", media);
	
	int j;
	for (j = 0; j < 10; j++) {
		if (l[j] < media) {
			somaMenores += l[j];
		}
	}
	
	printf("\nSoma dos valores menores que a media: %.1f\n", somaMenores);
}
