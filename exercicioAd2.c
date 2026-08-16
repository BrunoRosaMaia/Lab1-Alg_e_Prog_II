#include <stdio.h>
#include <stdlib.h>

int main(){
    system("chcp 65001 > nul");

    int horas, minutos;

    printf("Que horas são (formato 24 horas): ");
    scanf("%d", &horas);

    minutos = horas * 60;

    printf("Se passaram %d minutos desde o início do dia.\n", minutos);

    return 0;
}