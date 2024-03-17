/*1- Fazer um programa em "C" que lê uma string qualquer de no máximo 80
caracteres e imprime:
a) Quantos caracteres tem o string;
b) Quantos caracteres são de pontuação;
c) Quantos caracteres são números;
d) Quantos caracteres são espaço em branco*/

#include <stdio.h>
#include <stdlib.h>

void leitura (char *x);
void tipoCaracteres (char *a);


int main (void) {
	char string [81];
	leitura (string);
	tipoCaracteres(string);
	
	system("pause");
	return 0;
}

void leitura (char *x) {
	printf("Digite uma String: ");
	scanf(" %80[^\n]", x);
}

void tipoCaracteres (char *string) {
	int contador = 0, pontuacao = 0, num = 0, branco = 0;
	int n;
	for (n = 0; string [n] != '\0'; n++) {
		contador++;
		if (string[n] == '.' || string[n] == ',' || string[n] == '!' || string[n] == '?' || string[n] == ';' || string[n] == '-') {
			pontuacao++;
		} 
		if (string[n] == '0' || string[n] == '1' || string[n] == '2' || string[n] == '3' || string[n] == '4' || string[n] == '5' || string[n] == '6' || string[n] == '7' || string[n] == '8' || string[n] == '9'){
			num++;
		}
		if (string[n] == ' ') {
			branco++;
		}
	}

  
	printf("Voce digitou %d caracteres.\n", contador);
	printf("Quantidade total de pontuacao: %d\n", pontuacao);
	printf("Quantidade total de numeros: %d\n", num);
	printf("Quantidade total de espaços em branco: %d\n", branco);
}

/*2. Fazer um programa em "C" que lê uma string contendo palavras
separadas por um espaço em branco cada e as imprime uma abaixo das
outras*/

#include <stdio.h>
#include <stdlib.h>

void leitura (char *n);
void imprimir (char *j);

int main (void) {
	char palavras [51];
	leitura (palavras);
	imprimir (palavras);
	
	
	system("pause");
	return 0;
}

void leitura (char *n) {
	printf("Digite uma sequencia de palavras: ");
	scanf(" %50[^\n]", n);
}

void imprimir (char *j) {
	int i;

	for (i = 0; j[i] != 0; i++) {
		if (j[i] == ' ') {
			j[i] = '\n';
		}
	}
	printf(j);
	printf("\n");
}
