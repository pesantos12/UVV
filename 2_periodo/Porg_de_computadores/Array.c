#include <stdio.h>
#include <stdlib.h>

const TAM10 = 10;
const TAM20 = 20;



int main (void) {
	float vetor1[TAM10];
	float vetor2[TAM10];
	float vetorFinal[TAM20];
	
	
	printf("\nVetor 1\n");
	int i;
	for (i = 0; i < TAM10; i++) {
		printf("Digite o valor %d: ", i + 1);
		scanf("%f", &vetor1[i]);
	}
	printf("\nVetor 2\n");
	int j;
	for (j = 0; j < TAM10; j++) {
		printf("Digite o valor %d: ", j + 1);
		scanf("%f", &vetor2[j]);
	}
	
	int l;
	for (l = 0; l < TAM20; l++) {
		vetorFinal[2*l] = vetor1[l];
		
		vetorFinal[2*l +1] = vetor2[l];
	}
	
	int k;
	for (k = 0; k < TAM20; k++) {
		printf("%.2f ", vetorFinal[k]);
	}
	
	system("pause");
	return 0;
}


