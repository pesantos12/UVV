
#include <stdio.h>

int main(void)
{
    float H, M, IMC;
    printf("\nDigite o peso (kg): ");
    scanf("%f", &M);
    if(M <= 0) {
        printf("Peso inválido\n");
        return 0;
    }
    printf("Digite a altura (m): ");
    scanf("%f", &H);
    if(H <= 0) {
        printf("Altura inválida\n");
        return 0;
    }
    IMC = M / (H*H);
    printf("IMC: %.2f\n", IMC);
    
    if (IMC < 16) {
        printf("Magreza grau III\n");
    } else if(IMC < 17.0) {
        printf("Magreza grau II\n");
    } else if(IMC < 18.5) {
        printf("Magreza grau I\n");
    } else if(IMC < 25.0) {
        printf("Peso adequado\n");
    } else if(IMC < 30.0) {
        printf("Pré-obeso\n");
    } else if(IMC < 35.0) {
        printf("Obesidade grau I\n");
    } else if(IMC < 40.0) {
        printf("Obesidade grau II\n");
    } else {
        printf("Obesidade grau III\n");
    }
    
    return 0;
}
