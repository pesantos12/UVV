// teste vai até insertion

// QuickSort
/* definir elemento como pivo, quem é menor vai para um lado
e quem é maior vai para o outro e assim vai sucessivamente
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define n 10

void imprimir(int *v) {
    for(int i = 0; i<n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}




int particiona (int *V, int inicio, int final) {
    int esq, dir, pivo, aux;
    pivo = V[inicio];
    
    while(esq<dir) {
        while(V[esq] <= pivo && esq <= final) {
            esq++;
        }
        while(V[dir] > pivo && dir > inicio) {
            dir--;
        }
        
        if(esq<dir) {
            aux = V[esq];
            V[esq] = V[dir];
            V[dir] = aux;
        }
        
    }
    V[inicio] = V[dir];
    V[dir] = pivo;
    
    return dir;
}

void quickSort(int *V, int inicio, int fim) {
    int pivo;
    if (fim > inicio) {
        pivo = particiona(V, inicio, fim);
        quickSort(V, inicio, pivo-1);
        quickSort(V, pivo+1, fim);
    }
}

int main()
{
    int v[n] = {12, 34, 30, 42, 23, 50, 45, 11, 15, 22};
    quickSort(v, 0, 9);
    imprimir(v);

    return 0;
}
