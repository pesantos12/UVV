#include <stdio.h>
#include <stdlib.h>

int fatorial (int x) {
    if(x == 0) {
        return 1;
    }
    return x * fatorial(x-1);
}

int main()
{
    int resultado = fatorial(10);
    printf("%d", resultado);
    
    system("pause");
    return 0;
}