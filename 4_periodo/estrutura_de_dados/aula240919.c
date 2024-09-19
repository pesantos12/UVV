/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

typedef struct celula {
    int conteudo;
    struct celula *seg; //seg = seguinte
}cel;

cel* cria_lista() {
    cel* no = (cel*) malloc (sizeof(cel));
    if(no!=NULL) {
        return no;
    } else {
        return NULL;
    }
}

int insere_final (cel *li, int x) {
    if(li==NULL) {
        return 0;
    }
    cel *no = (cel*) malloc (sizeof(cel));
    if(no==NULL) {
        return 0;
    }
    no->conteudo = x;
    no->seg = NULL;
    if((*li)==NULL) {
        li = no;
    } else {
        cel *aux;
        aux = li;
        while(aux->seg != NULL) {
            aux = aux->seg;
        }
        aux->seg = no;
    }
    return 1;
}

int main()
{
    cel *lst;
    
    lst = cria_lista();
    
    insere_final(lst, 2);
    insere_final(lst, 1);
    insere_final(lst, 8);
    insere_final(lst, 4);
    
    imprime(lst);
    
    return 0;
}