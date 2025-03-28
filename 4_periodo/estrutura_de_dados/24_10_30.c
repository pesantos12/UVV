#include <stdlib.h>
#include <stdio.h>

struct NO {
    int info;
    struct NO *esq;
    struct NO *dir;
};

typedef struct NO* ArvBin;

ArvBin* cria_ArvBin(){
    ArvBin* raiz = (ArvBin*) malloc(sizeof(ArvBin));
    if(raiz != NULL) {
        *raiz = NULL;
    }
    return raiz;
}

int insere_ArvBin(ArvBin* raiz, int valor) {
    if(raiz==NULL){ //verifica se ele existe
        return 0;
    }
    //criar o nó para inserir
    struct NO* novo;
    novo = (struct NO*) malloc(sizeof(struct NO));
    if(novo==NULL){//verifica conseguiu alocar memoria.
        return 0;
    }
    novo->info = valor;
    novo->dir = NULL;
    novo->esq = NULL;
    
    if(*raiz == NULL) {//se a arvore está vazia, primeiro elemento.
        *raiz = novo;
    } else {//se não for o primeiro elemento, caminhar na arvore.
        struct NO* atual = *raiz;
        struct NO* ant = NULL;
        
        while(atual!= NULL) {//caminhar na árvore
            ant = atual;
            if(valor == atual->info) {
                free(novo);
                return 0;
            }
        
            if(valor>atual->info){
                atual = atual->dir;
            } else{
                atual = atual->esq;
            }
            
        }
        if(valor>ant->info){
            ant->dir = novo;
        } else {
            ant->esq = novo;
        }
    }
    return 1;
}

void libera_NO(struct NO* no) {
    if(no == NULL){
        return;
    }
    libera_NO(no->dir);
    libera_NO(no->esq);
    free(no);
}

void preOrdem_arvBin(ArvBin *raiz){
    if(raiz==NULL){
        return;
    }
    if(*raiz != NULL){
        printf("%d\t", (*raiz)->info);
        preOrdem_arvBin(&((*raiz)->esq));
        preOrdem_arvBin(&((*raiz)->dir));
    }
}

void emOrdem_arvBin(ArvBin *raiz){
    if(raiz==NULL){
        return;
    }
    if(*raiz != NULL){
        emOrdem_arvBin(&((*raiz)->esq));
        printf("%d\t", (*raiz)->info);
        emOrdem_arvBin(&((*raiz)->dir));
    }
}

void posOrdem_arvBin(ArvBin *raiz){
    if(raiz==NULL){
        return;
    }
    if(*raiz != NULL){
        posOrdem_arvBin(&((*raiz)->esq));
        posOrdem_arvBin(&((*raiz)->dir));
        printf("%d\t", (*raiz)->info);
    }
}

void libera_ArvBin(ArvBin *raiz){
    if(raiz==NULL) {//verifica se ela existe
        return;
    }
    libera_NO(*raiz);
    free(raiz);
}

int altura_ArvBin(ArvBin *raiz) {
    if(raiz==NULL || *raiz==NULL){
        return -1;
    }
    
    int alt_esq = altura_ArvBin(&((*raiz)->esq));
    int alt_dir = altura_ArvBin(&((*raiz)->dir));
        
    if(alt_esq > alt_dir) {
        return(alt_esq + 1);
    } else {
        return(alt_dir + 1);
    }
    
}

int totalNos_ArvBin(ArvBin *raiz){
    if(raiz==NULL || *raiz==NULL){
        return 0;
    }
    
    int alt_esq = totalNos_ArvBin(&((*raiz)->esq));
    int alt_dir = totalNos_ArvBin(&((*raiz)->dir));
    
    return (alt_dir+alt_esq+1);
}

int consulta_ArvBin(ArvBin* raiz, int valor) {
    if(raiz==NULL || *raiz==NULL){
        return 0;
    }
    
    struct NO* atual = *raiz;
    while(atual!=NULL){
        if(valor == atual->info){
            return 1;
        }
        if(valor>atual->info){
            atual = atual->dir;
        }else {
            atual = atual->esq;
        }
    }
    
    return 0;
}



int main()
{
    ArvBin* raiz = cria_ArvBin();
    int N=8, dados[8] = {50, 100, 30, 20, 40, 45, 35, 37};
    
    for(int i = 0; i<N; i++) {
        insere_ArvBin(raiz, dados[i]);
    }
    preOrdem_arvBin(raiz);
    printf("\n");
    emOrdem_arvBin(raiz);
    printf("\n");
    posOrdem_arvBin(raiz);
    printf("\n");
    printf("Altura: %d",altura_ArvBin(raiz));
    printf("\n");
    printf("Total de nós: %d", totalNos_ArvBin(raiz));
    printf("\n");
    printf("%d",consulta_ArvBin(raiz, 21));
    printf("\n");
    return 0;
}
