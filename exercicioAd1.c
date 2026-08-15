#include <stdio.h>
#include <stdlib.h>

int main(){
    // Adicionei esta linha para os caracteres especiais aparecerem no meu terminal
    system("chcp 65001 > nul");

    float salarioBruto, salarioMin, dif;

    printf("Valor do salário mínimo: ");
    scanf("%f", &salarioMin);

    printf("\nValor do salário bruto: ");
    scanf("%f", &salarioBruto);

    dif = salarioBruto / salarioMin;

    printf("\nQuantidade de salários mínimos: %.2f", dif);

    return 0;
}