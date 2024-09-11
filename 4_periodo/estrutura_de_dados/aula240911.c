// teste vai até insertion

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

void merge(int *v, int inicio, int meio,int fim) {
    int *temp, p1, p2, tamanho, i, j, k, fim1 = 0, fim2 = 0;
    
    tamanho = fim-inicio+1;
    temp = (int *) malloc (tamanho*sizeof(int));
    p1 = inicio;
    p2 = meio+1;
    if(temp != NULL) {
        for(i = 0; i < tamanho; i++) {
            if (!fim1 && !fim2) {//se nenhum chegou no final, entra
                if(v[p1] < v[p2]) {
                    temp[i] = v[p1++];
                } else {
                    temp[i] = v[p2++];
                }
                if(p1>meio) {fim1 = 1;}
                if(p2>fim) {fim2 = 1;}
            }
            else {//se alguem chegou no final
                if(fim) {
                    temp[i] = v[p1++];
                } else {
                    temp[i] = v[p2++];
                }
            }
        }
        for(j=0, k=inicio;j<tamanho; j++, k++) { // voltar com os valores ordenados para o original
            v[k] = temp[j];
        }
        
    }
    free(temp);
    
}

void mergeSort(int *v, int inicio, int fim) {
    int meio;
    if(inicio < fim ) {
        meio = floor((inicio + fim)/2);
        mergeSort(v, inicio, meio);
        mergeSort(v, meio + 1, fim);
        merge(v,inicio, meio ,fim);
    }
}



int main()
{
    int v[n] = {12, 34, 50, 42, 23, 50, 45, 11, 15, 22};
    mergeSort(v, 0, 9);
    imprimir(v);
    
    return 0;
}


////////////////////////////////////////////////////

// QuickSort
/* definir elemento como pivo, quem é menor vai para um lado
e quem é maior vai para o outro e assim vai sucessivamente
*/