#include <stdio.h>
#include <stdlib.h>
#include <time.h> //precisa dessa biblioteca para funcionar

int main()
{
    //comando para gerar um número novo toda vez que rodar
    srand(time(NULL));
    
    
    int a = rand(); //número aleatório que ocupa todos os espaços do int
    int b = rand() % 100; //número aleatório entre 0 e 99
    int c = (rand() % 100) + 1; //número aleatório entre 1 e 100
    int d = (rand() % 10) + 1; //número aleatório entre 1 e 10
    int e = ((rand() % 10) + 1) / 2; //número aleatório entre 1 e 5
    int f = ((rand() % 10) + 1) / 5; //número aleatório entre 1 e 2

    printf("%d %d %d %d %d", a, b, c, d, e, f);
}
