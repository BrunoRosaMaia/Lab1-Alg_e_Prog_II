#include <stdio.h>
#include <stdlib.h>

int main(){
    system("chcp 65001 > nul");

    float salario_min, dolar, custo_casa;
    float liberado = 10000000;
    int casas;

    printf("Qual é o valor do salário mínimo (R$): ");
    scanf("%f", &salario_min);

    printf("Qual é o valor do dólar (R$): ");
    scanf("%f", &dolar);

    // Convertendo de dólares para reais
    liberado *= dolar;

    custo_casa = salario_min * 150;
    
    casas = (int) (liberado / custo_casa);

    printf("Será possível construir %d casas.\n", casas);

    return 0;
}