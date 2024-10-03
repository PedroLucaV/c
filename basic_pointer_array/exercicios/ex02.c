//Crie um array de 5 inteiros e utilize um ponteiro para acessar cada elemento. Imprima os valores e os endereços de cada elemento utilizando o ponteiro e aritmética de ponteiros.

#include <stdio.h>

int main(){
    int arr[5] = {1,2,3,4,5};
    int *p = arr;

    for(int i = 0; i < arr; i++){
        printf("Valor: %d - Endereço: %d\n", arr[i], (p+i));
    }

    return 0;
}