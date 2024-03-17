#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main (void) {
	
	/*const int tam = 4;
	char faculdade [tam];
	faculdade [0] = 'U';
	faculdade [1] = 'V';
	faculdade [2] = 'V';
	printf("%s \n", faculdade);
	*/
	/*char faculdade [] = {'U', 'V', 'V', '\0'};
	printf("%s \n", faculdade);*/
	char faculdade [81];
	scanf(" %80[^\n]", faculdade); //formato mais completo de se ler uma string
	
	puts(faculdade);
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
