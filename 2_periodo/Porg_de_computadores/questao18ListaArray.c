/*Escreva um algoritmo em C que leia a Matrícula e tempo de corrida (em minutos) de 25000 mil atletas que
participaram das 10 Milhas Garoto.
Armazene os dados em (2) vetores apropriados. Após isso, responda:
18. Exiba na tela também, a diferença de tempo final, entre eles, da prova*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void leitura (int *a, float *b);
void diferencaMaiorMenor (int *m, float *c);

int main (void) {
	int matricula [11];
	float tempo [11];
	
	leitura(matricula, tempo);
	
	diferencaMaiorMenor (matricula, tempo);
	
	
	system("pause");
	return 0;
}

void leitura (int *a, float *b) {
	int i, matricula;
	float tempo;
	
	for (i = 0; i < 4; i++) {
		printf("\nDigite a matricula: ");
		scanf("%d", &matricula);
		printf("\nTempo de prova (em minutos): ");
		scanf("%f", &tempo);
		
		a[i] = matricula;
		b[i] = tempo;
	}
}

void diferencaMaiorMenor (int *m, float *c) {
	int i =0, iM, iN;
	float maior = c[i], menor = c[i];
	for (i = 1; i < 4 ; i++) {
		if (c[i] < menor) {
			menor = c[i];
			iN = i;
		}
		if (c[i] > maior) {
			maior = c[i];
			iM = i;
		}
	}
	
	printf("\nMaior: Matricula = %d, Tempo = %.1f\n", m[iM], maior);
	printf("Menor: Matricula = %d, Tempo = %.1f\n", m[iN], menor);
	printf("Diferenca = %.1f\n", maior - menor);
}
