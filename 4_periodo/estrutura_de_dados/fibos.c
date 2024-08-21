#include <stdio.h>
#include <stdlib.h>

int fibos(int x) {
    if(x < 2) {
        return x;
    } else {
        return (fibos(x - 1) + fibos(x - 2));
    }
}

int fibas(int x) {
    int i = 0;
    for(i; i <= x; i++) {
        printf("%d ", fibos(i));
    }
}

int main()
{
    int x = 10;
    printf("%d\n", fibos(x - 1));
    fibas(x - 1);



    return 0;
}
