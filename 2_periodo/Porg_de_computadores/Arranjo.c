#include <stdio.h>
#include <stdlib.h> //system("pause");
//atividade de arranjo
int main(void)
{
	int n, p, arranjo, fat;
	
	
	do {
		printf("\n\tDigite o valor de n (>=1): ");
		scanf("%d", &n);
		printf("\n\tDigite o valor de p (>=1 e p <= n): ");
		scanf("%d", &p);
		if (n < 1 || p < 1 || p > n) {
			printf("\nOs valores inseridos são inválidos, porfavor digite novamente.");
		}
	} while (n < 1 || p < 1 || p > n);

	int x, a, i;
	printf("\n\tDigite um valor: ");
	scanf("%d", &x);
	a = x;
	if (x == 0) {
			a = 1;
	} else {
		for (i = 1; i < x; i++) {
			a = a*(x-i);
		}
	}
	printf("\n%d\n", a);
	
	

	
	system("pause");
	return 0;
}
