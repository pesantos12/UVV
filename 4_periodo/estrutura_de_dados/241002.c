#include <stdio.h>
#include <stdlib.h>

typedef struct cel {
    int conteudo;
    struct cel *seg;
}cel;

typedef struct cel* Lista;

Lista* cria_Lista() {
    Lista *li = (Lista*) malloc (sizeof(Lista));
    if(li!=NULL){
        *li = NULL;
    }
    return li;
}

int insere_lista_ultimo(Lista* lista, int x) {
    if(lista==NULL){
        return 0;
    }
    
    cel* aux = (cel*) malloc (sizeof(cel));
    if(aux==NULL){
        return 0;
    }
    aux->conteudo = x;
    aux->seg = NULL;
    
    if((*lista) == NULL){
        *lista = aux;
    }else {
        cel *temp;
        temp = *lista;
        while(temp->seg!=NULL) {
            temp = temp->seg;
        }
        temp->seg = aux;
    }
    return 1;
}

void imprimir(Lista* lista){
    if(lista == NULL) { return; }
    cel* aux = *lista;
    while(aux!=NULL) {
        printf("| %d ", aux->conteudo);
        aux = aux->seg;
    }
    printf("\n");
}

int buscar(Lista* lista, int valor) {
    cel *p;
    for(p =*lista; p!=NULL;p=p->seg){
        if(p->conteudo ==valor) {
            return 1;
        }
    }
    return 0;
}

void liberar_lista(Lista* lista){
    if(lista != NULL){
        cel* aux;
        while(*lista!=NULL){
            aux = *lista;
            *lista = (*lista)->seg;
            free(aux);
        }
    }
}

int main()
{
    printf("\nINICIO\n");
    Lista *lst;
    lst= cria_Lista();
    
    insere_lista_ultimo(lst, 10);
    insere_lista_ultimo(lst, 20);
    insere_lista_ultimo(lst, 30);
    insere_lista_ultimo(lst, 40);
    insere_lista_ultimo(lst, 50);

    imprimir(lst);
    printf("\nFIM");
    return 0;
}
