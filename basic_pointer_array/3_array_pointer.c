#include <stdio.h>

int main(){
    int arr[3] = {10, 20, 30};
    int *p = arr; //Ponteiro aponta para o primeiro elemento do array

    for(int i = 0; i < 3; i++){
        printf("Elemento %d: %d\n", i, *(p+i)); // Usando aritmética de ponteiro para acessar elementos
    }

    return 0;
}