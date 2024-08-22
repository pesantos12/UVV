/* Busca em array
- percorrer uma lista
- busca de uma determinada chave

tipos de busca:
dados estruturados, dados ordenados e existem valores duplicados

dados armazenados em array (ordenados ou não),
métodos: sequencia ou linear, ordenado ou binário

sequencial ou linear, um algoritmo que percorre o array que contém os dados
desde a sua primeira posição até a última, se o valor for igual para se não
continua.*/

int buscaLinear(int *v, int elemento) {
    int i;
    for(i = 0; i < sizeof(v)-1; i++) {
        if(v[i] == elemento) {
            return i;
        }
    }
    return -1;
}

/*
Complexidade busca sequencial ou linear
O(1) melhor caso busca rapida
O(N) pior caso
O(N/2) medio caso

Busca sequencial Ordenada:
se o elemento procurado for menor que um número ele para
a execução porque como está ordenado, os próximos também não
serão iguais a ele, portanto mais rápido*/

int buscaOrdenada(int *v, int elemento) {
    int i;
    for(i = 0; i < sizeof(v)-1; i++) {
        if(v[i] == elemento) {
            return i;
        } else if(elemento < v[i]) {
            return -1;
        }
    }
    return -1;
}

/*
Busca Binária:
mais eficiente que a ordenada.
estratégia "dividir para conquistar"
O(1) elemento no meio do array
O(log2N) pior caso o elemento não existe
O(log2N) caso médio
*/
int buscaBinaria(int *v, int elemento) {
    int meio = (sizeof(v)+1)/2;
    int inicio = 0;
    int final = (sizeof(v)+1);

    do {
        if(v[inicio] == elemento) {
            return inicio;
        } else if(v[final] == elemento) {
            return final;
        } else if(v[meio] == elemento) {
            return meio;
        } else if(v[meio] > elemento){
            final = meio - 1;
            inicio++;
        } else if(v[meio] < elemento) {
            final--;
            inicio = meio + 1;
        }
    } while(inicio != final);
    return -1;
}
