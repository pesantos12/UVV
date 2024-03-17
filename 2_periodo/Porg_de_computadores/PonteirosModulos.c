#include <stdio.h>
//#include <stdlib.h>
#include <math.h>

void lerValores(int *f, int *g);
void trocaValores(int *f, int *g);
void mostrarValores(int *f, int *g);

int main (void) {
    int a, b, x = 1;
    
    while (x != 0) {
        printf("\n\n\tMenu:\n1: Ler Valores\n2: Trocar Valores\n3: Mostrar Valores\n0: Sair\n\n");
        scanf("%d", &x);
        switch(x) {
            case 1: 
                lerValores(&a, &b);
                break;
            case 2:
                trocaValores(&a, &b);
                break;
            case 3:
                mostrarValores(&a, &b);
                break;
            case 0:
                break;
            default:
                printf("\ninválido");
                break;
        }
    }
    
    
    
    
    
    //system("pause");
    return 0;
}

void lerValores(int* f, int* g) {
    
    printf("Digite um valor a: ");
    scanf("%d", f);
    printf("Digite um valor b: ");
    scanf("%d", g);
}

void trocaValores (int* f, int* g) {
    int c = *f;
    *f = *g;
    *g = c;
}

void mostrarValores (int* f, int* g) {
    printf("\nValor de a: %d", *f);
    printf("\nValor de b: %d", *g);
}
