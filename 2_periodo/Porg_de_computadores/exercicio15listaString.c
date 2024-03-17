/*15) Escrever um programa que leia 100 palavras (uma de cada vez) e concatene (CAT) em um Texto
Abreviação somente as três primeiras letras de cada palavras. Exibir ao final o Texto Abreciação*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void leitura (char *a);
void funcaoTextoAbreviar (char *b, char *c, char *d);

int main (void) {
    char palavra [21];
    char letras [4];
    char textoAbreviacao [301];
    
    funcaoTextoAbreviar (palavra, letras, textoAbreviacao);
    printf("\n%s", textoAbreviacao);
    
    
    system("pause");
    return 0;
}

void leitura (char *a) {
    printf("Digite uma palavra: ");
    scanf(" %20[^\n]", a);
}

void funcaoTextoAbreviar (char *b, char *c, char *d) {
    int i, j;
    for (i = 0; i < 100; i ++) {
        leitura(b);
        for (j = 0; j < 3; j++) {
            c[j] = b[j];
        }
        
        strcat(d, c);
        strcat(d, " ");
    }
}
