#include <stdio.h>
#include <stdlib.h>
/*
h(m,n) = m + 1, se n = 1
h(m,n) = n + 1, se m = 1
h(m,n) = h(m, n - 1) + h(m - 1, n), se m > 1, n > 1
*/
int h(int m, int n) {
    if(n == 1 || m == 1) {
        return m + n;
    } else if (m > 1 && n > 1){
        return h(m, n - 1) + h(m - 1, n); 
    }
}

int main()
{
    printf("%d ", h(6, 9));
    return 0;
}
