#include <stdio.h>
#include <stdlib.h>

int main(){
    system("chcp 65001 > nul");

    float comp, largura, area;

    printf("Qual é o comprimento do terreno (em metros): ");
    scanf("%f", &comp);

    printf("Qual é a largura do terreno (em metros): ");
    scanf("%f", &largura);

    area = comp * largura;

    printf("A área do terreno é de %.2f m².\n", area);

    return 0;
}