#include <stdio.h>

int quadrado(int a){
    return a*a;
}

int main(){
    int x = 4;
    int resultado = quadrado(x);

    printf("Quadrado de: %d", x);
    printf("\nÉ igual a: %d", resultado);
    return 0;
}