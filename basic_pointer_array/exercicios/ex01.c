//Crie um programa que declare uma variável inteira, um ponteiro para essa variável, e imprima o valor e o endereço da variável utilizando o ponteiro.
#include <stdio.h>

int main(){
    int x;

    printf("Informe um número: ");
    scanf("%d", &x);

    int *p = &x;

    printf("Valor: %d \nEndereço: %p", x, p);

    return 0;
}