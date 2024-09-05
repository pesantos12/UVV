/*
InsertionSort
*/
void insertionSort(int *v) {
    int i, j, aux = 0;
    for(i = 1; i < n; i++) {
        for(j = i - 1; (v[i] < v[j]) && (j >= 0); j--) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
                i--;
        }   
    }
}


/*
MergeSort = "Dividir para conquistar"

divide os dados em subconj cada veez menores depois ordena e combina por meio de intercalação


*/

/*
MergeSort = um dos mais simples

*/

#include <stdio.h>
#define n 10

void imprimir(int *v) {
    for(int i = 0; i<n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
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
    printf("%d ", buscaBinaria(v, 50));
    return 0;
}
