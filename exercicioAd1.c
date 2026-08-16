#include <stdio.h>
#include <stdlib.h>

int main(){
    // Adicionei esta linha para os caracteres especiais aparecerem no meu terminal
    system("chcp 65001 > nul");

    float salario_bruto, salario_min, dif;

    printf("Valor do salário mínimo: ");
    scanf("%f", &salario_min);

    printf("\nValor do salário bruto: ");
    scanf("%f", &salario_bruto);

    dif = salario_bruto / salario_min;

    printf("\nQuantidade de salários mínimos: %.2f", dif);

    return 0;
}