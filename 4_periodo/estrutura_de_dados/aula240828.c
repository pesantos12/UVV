/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define n 9
/*
Busca Binária:
mais eficiente que a ordenada.
estratégia "dividir para conquistar"
O(1) elemento no meio do array
O(log2N) pior caso o elemento não existe
O(log2N) caso médio
*/


int buscaBinaria(int *v, int elemento) {
    int inicio, meio, final;
    inicio = 0;
    final = n - 1;
    while(inicio <= final) {
        meio = (inicio + final)/2;
        if(v[meio] == elemento) {
            return meio;
        } if (elemento < v[meio]) {
            final = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }
    return -1;
}

int binariaRecursiva(int *v, int elem, int inicio, int final) {
    
    if(inicio > final) {
        return -1;
    }

    int meio = (inicio + final) / 2;
    if(v[meio] == elem) {
        return meio;
    } if (elem < v[meio]) {
        (binariaRecursiva(v, elem, inicio, meio - 1));
    } else {
        (binariaRecursiva(v, elem, meio + 1, final));
    }
    

}

int main()
{
    int c[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for(int i = 0; i < n; i++) {
        printf("%d ", binariaRecursiva(c, c[i], 0, n - 1));
    }

    return 0;
}


/*
Ordenação:
ordenção por chaves

ordenação interna: tudo que vamos fazer na mem principal (foco da materia)
ordenação externa: arquivos, hd

ordenação é feita comparando chaves
existem métodos que não usam chavem:
	metódo de distribuição (exemplo baralho [A<2<3<...<10<J<Q<K])


*/