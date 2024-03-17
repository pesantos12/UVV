/*
CONCEITOS LÓGICOS DE PROGRAMAÇÃO: Variável: int, float ou char, Constante (#define),
Entrada de dados: scanf, Saída de dados: printf, Operadores: Aritméticos, Relacionais e Lógicos e
Estruturas de Seleção: Simples: if, Composta: if - else, Encadeada: if – else if – else e Múltipla: switch.
1) Determine o resultado das variáveis a cada linha de processamento. Escreva os valores nos comentários.
a)
int a = 5, b, c, d;    // a = 5, b = ,c = ,d =
a--;                   // a = 4, b = ,c = ,d =
b = a % 3 * 5;         // a = 4, b = 5,c = ,d =
c = (a + b) % 2;       // a = 4, b = 5,c = 1,d =
d = c++;               // a = 4, b = 5,c = 2,d = 2
d = ++c;               // a = 4, b = 5,c = 3,d = 3
printf("Valor de a: %i\nValor de b: %i\nValor de c: %i\nValor de d: %i\n ", a, b, c, d);
Valor de a: 4
Valor de b: 5
Valor de c: 3
Valor de d: 3

b)
int a = -1, b, c, d;   // a = -1, b = ,c = ,d =
a *= -7;               // a = 7, b = ,c = ,d =
b = a * 5 % 6;         // a = 7, b = 5,c = ,d =
c = a + b % 3;         // a = 7, b = 5,c = 9,d =
d = c--;               // a = 7, b = 5,c = 8,d = 8
d = --c;               // a = 7, b = 5,c = 7,d = 7
printf("Valor de a: %i\nValor de b: %i\nValor de c: %i\nValor de d: %i\n ", a, b, c, d);
Valor de a: 7
Valor de b: 5
Valor de c: 7
Valor de d: 7

c)
int a = -20, b, c, d;  // a = -20, b = ,c = ,d =
a /= -4;               // a = 5, b = ,c = ,d =
b = a * 5 % 6;         // a = 5, b = 1,c = ,d =
d = c--;               // a = 5, b = 1,c = ,d =
d -= 1;                // a = 5, b = 1,c = ,d =
printf("Valor de a: %i\nValor de b: %i\nValor de c: %i\nValor de d: %i\n ", a, b, c, d);

d)
int a = 23, b, c, d;  // a = , b = ,c = ,d =
a %= 5;               // a = , b = ,c = ,d =
b = !a;               // a = , b = ,c = ,d =
d = !c && b;          // a = , b = ,c = ,d =
d = !a || !c;         // a = , b = ,c = ,d =
printf("Valor de a: %i\nValor de b: %i\nValor de c: %i\nValor de d: %i\n ", a, b, c, d); 
*/
