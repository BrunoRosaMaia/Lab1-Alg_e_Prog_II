#include <stdio.h>
#include <stdlib.h>

int main(){
    system("chcp 65001 > nul");

    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    if (valor % 5 == 0){
        printf("Esse valor é múltiplo de 5.\n");
    }
    else {
        printf("Esse valor não é múltiplo de 5.\n");
    }

    return 0;
}