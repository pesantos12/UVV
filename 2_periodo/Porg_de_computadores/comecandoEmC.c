/* Exemplo 1:

Faça um algoritmo em C que leia de um aluno (1) da academia:

⟼  Medida da Cintura (em centímetros): MC

⟼  Medida da Quadril (em centímetros): MQ

E exiba na tela seu  RCQ  (Relação Cintura-Quadril em %). Sendo que:

RCQ=MCMQ∗100 */

#include <stdio.h>

int main()
{
    float MC, MQ, RCQ;
    printf("Digite a medida da Cintura: \n");
    scanf("%f", &MC);
    printf("Digite a medida do Quadril: \n");
    scanf("%f", &MQ);
    
    RCQ = (MC/MQ)*100;
    
    printf("A relação Cintura-Quadril é de %.0f", RCQ);
}






/* Exemplo 2:

Escrever um algoritmo em C que leia de um (1) aluno sua nota do 1º e 2º bimestre e exiba na tela sua média semestral. */

#include <stdio.h>

int main()
{
    float notab1, notab2, media;
    
    printf("Digite a sua nota do primeiro bimestre: \n");
    scanf("%f", &notab1);
    printf("Digite a sua nota do segundo bimestre: \n");
    scanf("%f", &notab2);
    
    media = (notab1 + notab2)/2;
    
    printf("\nA sua média semestral foi %.1f", media);
}




/* Exemplo 3:

Escrever um algoritmo em C que leia de uma (1) mercadoria:

Preço: R$
Quantidade: Unidade
Reajuste (Desconto): %
exibir na tela:

Total a pagar: sem desconto
Total a pagar: com desconto*/

#include <stdio.h>

int main()
{
    float preco, desconto;
    int quantidade;
    printf("Digite o preço do produto: ");
    scanf("%f", &preco);
    printf("\nDigite a quantidade do produto: ");
    scanf("%d", &quantidade);
    printf("\nDigite o desconto do produto (em %%): ");
    scanf("%f", &desconto);
    float total, totalDesconto;
    total = preco * quantidade;
    totalDesconto = total * (1 - desconto/100);
    printf("O valor total da compra foi R$ %.2f, o valor total com desconto foi R$ %.2f", total, totalDesconto);
}





/* Exemplo 4:

Escrever um algoritmo em C que leia a comprimento de uma (1) barra em centímetro e exiba na tela sua dimensão em:

Polegadas
pés
Sabendo que, 1 Polegada = 2.54 Centímetros = 0.08 pés (ft).
*/
#include <stdio.h>

int main()
{
    float comprimento, polegada, pes;
    
    printf("Digite o comprimento de uma barra em centímetros: \n");
    scanf("%f", &comprimento);
    polegada = comprimento/2.54;
    pes = polegada*0.08;
    
    printf("\nO comprimento da barra de centímetros (%.2f) em polegadas: %.2f; em pés: %.2f", comprimento, polegada, pes);
}





/* Exemplo 5:

Faça um algoritmo em C que leia:

⟼  Medidas de um Tanque de combustível - LAP (em metros):

⟼  Preço por Litros: Álcool e Gasolina.

e exiba na tela o total a ser pago para encher este tanque de combustível:

⟼  Somente com gasolina;

⟼  Somente com Álcool;

⟼  na proporção: 20% de Álcool e 80% de Gasolina.

(Sabendo que,  1 metro3=1000Litros .)*/

#include <stdio.h>

int main()
{
    //Medidas LAP em metros e cálculo do tanque convertido em litros
    float largura, altura, profundidade, tanque, alcool, gasolina;
    printf("Digite a largura do tanque de combustível (em metros): \n");
    scanf("%f", &largura);
    printf("Digite a altura do tanque de combustível (em metros): \n");
    scanf("%f", &altura);
    printf("Digite a profundidade do tanque de combustível (em metros): \n");
    scanf("%f", &profundidade);
    
    tanque = largura*altura*profundidade*1000;
    
    //valor por litro
    printf("Digite o preço do Álcool por litro: \n");
    scanf("%f", &alcool);
    printf("Digite o preço da Gasolina por litro: \n");
    scanf("%f", &gasolina);
    
    printf("\nO preço a ser pago para encher o tanque com gasolina é de R$ %.2f", gasolina*tanque);
    printf("\nO preço a ser pago para encher o tanque com álcool é de R$ %.2f", alcool*tanque);
    
    //Proporção 20% de Álcool e 80% de gasolina
    float pAlcool, pGasolina;
    pAlcool = alcool*(0.2*tanque);
    pGasolina = gasolina*(0.8*tanque);
    
    printf("\nO preço pagando na proporção 20%% de Álcool e 80%% de Gasolina é de R$ %.2f", pAlcool + pGasolina);
}
