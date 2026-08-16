#include <stdio.h>
#include <stdlib.h>

int main(){
    system("chcp 65001 > nul");

    float nota1, nota2, nota3, media;

    printf("Primeira nota: ");
    scanf("%f", &nota1);

    printf("Segunda nota: ");
    scanf("%f", &nota2);

    printf("Terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A média das notas é %.2f.\n", media);

    return 0;
}