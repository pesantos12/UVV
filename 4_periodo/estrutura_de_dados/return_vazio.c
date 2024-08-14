#include <stdio.h>
#include <stdlib.h>

void teste(int x) {
    if(x > 0) {
        return; /*essa função não tem retorno porém caso você queira parar a execução
        e voltar para a main, colocar um return sozinho*/
    }
    printf("teste");
}

int main()
{
    teste(10);
    
    
    
    system("pause");
    return 0;
}