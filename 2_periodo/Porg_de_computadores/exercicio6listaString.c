/*6) Escrever um programa que leia várias mensagens (uma por uma) e conte a quantidade de vezes que
uma sílaba (duas letras) qualquer, escolhida pelo usuário, aparece na mensagem.
Pare de ler mensagens, quando a sílaba, escolhida pelo usuário, NÃO estiver na mensagem lida.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void leitura (char *a);
void leituraSilaba (char *b);
void verificador (char *c, char *d);

int main (void) {
    char palavra [21];
    char silaba [3];
    leituraSilaba (silaba);
    verificador (palavra, silaba);

    system("pause");
    return 0;
}

void leitura (char *a) {
    printf("Digite uma palavra:");
    scanf(" %20[^\n]", a);
}

void leituraSilaba (char *b) {
    printf("Digite uma silaba (duas letras):");
    scanf(" %2[^\n]", b);
}

void verificador (char *c, char *d) {
    int x, contador;
    do {
        x = 0;
        contador = 0;
        leitura (c);
        int n;
        for (n = 0; c[n + 1] != '\0'; n++) {
            if (c[n] == d[0] && c[n+1] == d[1]) {
                x = 1;
                contador++;
            }
        }
        if (x == 1) {
            printf("Essa palavra contém a siliba digitada um total de %d vezes.\n", contador);
        }
        
        
    } while (x != 0);
    printf("Essa palavra não contém as silibas digitadas! \nEncerrando o programa...\n");
}
