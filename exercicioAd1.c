#include <stdio.h>

int main(){
    float salarioBruto;
    float salarioMin;

    printf("Valor do salário mínimo: ");
    scanf("%f", salarioMin);

    printf("\nValor do salário bruto: ");
    scanf("%f", salarioBruto);

    float dif = salarioBruto / salarioMin;

    printf("\n%f", dif);

    return 0;
}