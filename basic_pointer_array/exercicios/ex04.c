//Escreva um programa que recebe um array de inteiros e, utilizando ponteiros, calcula a soma dos elementos do array.
#include <stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 4, 5};

    int *p = arr;

    int sum = 0;

    for (int i = 0; i < 5; i++){
        sum = sum + *(p+i);
    }

    printf("%d", sum);
    
    return 0;
}
