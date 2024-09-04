#include <stdio.h>
#define n 10

void imprimir(int *v) {
    for(int i = 0; i<n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void selectionSort(int *v) {
    int i, j, menor, troca;
    
    for(i = 0; i < n - 1; i++) {
        menor = i;
        for(j = i+1; j< n; j++) {
            if(v[j] < v[menor]) {
                menor = j;
            }
        }
        if(i != menor) {
            troca = v[i];
            v[i] = v[menor];
            v[menor] = troca;
        }
        imprimir(v);
        
    }
}

int main()
{
    int v[n] = {12, 34, 50, 42, 23, 50, 45, 11, 15, 22};
    selectionSort(v);

    return 0;
}

/*
InsertionSort = um dos mais simples

*/

#include <stdio.h>
#define n 10

void imprimir(int *v) {
    for(int i = 0; i<n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void insertionSort(int *v) {
    int i, j, aux = 0;
    for(i = 1, j = i - 1; i < n; i++) {
        
        while(v[i] < v[j] ) {
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
            i = j + 1;
            j--;
            i--;
        }
        imprimir(v);
    }
}

int main()
{
    int v[n] = {12, 34, 50, 42, 23, 50, 45, 11, 15, 22};
    insertionSort(v);

    return 0;
}