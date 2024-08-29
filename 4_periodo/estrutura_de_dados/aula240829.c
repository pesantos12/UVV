/*bubblesort = ordenação em bolha

Compara pares de elementos adjacentes e os troca de lugar
se estiverem na ordem errada
esse processo se repete até que mais nenhuma troca seja necessária


melhor caso : lista ordernada
pior: lista decrescente
*/
#include <stdio.h>
#define n 5

void bolha(int*v) {
    int i, aux = 0, trocou = 0, fim = n;
    do {
        trocou = 0;
        for(i = 0;(i + 1) < fim; i++) {
            if(v[i] > v[(i + 1)]) {
                aux = v[i];
                v[i] = v[(i + 1)];
                v[(i + 1)] = aux;
                trocou = 1;
            }
        }
        fim--;
    } while (trocou == 1);

}

int main()
{
    int v[] = {10, 6, 2, 8, 4};
    bolha(v);
    
    
    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }

    return 0;
}


/*
selectionSort =
pegar o menor e o maior elemento do vetor e colocar na primeira
e última posição do vetor respectivamente
*/

#include <stdio.h>
#define n 5

void selectionSort(int*v) {
    int i, aux = 0;
    if(v[n] < v[0]) {
        aux = v[0];
        v[0] = v[n];
        v[n] = aux;
    }
    primeiro = v[0], ultimo = v[n];
    for(i = 1; i < n-1; i++) {
        
    }
}

int main()
{
    int v[] = {10, 6, 2, 8, 4};
    selectionSort(v);
    
    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }

    return 0;
}