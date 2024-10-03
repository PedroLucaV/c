//Um ponteiro é uma variável que armazena o endereço de memória de outra variável. Eles são essenciais para manipulação eficiente de dados e memória em C. A declaração de um ponteiro inclui o tipo de dado da variável que ele vai apontar:

int main(){
    //int *p; //declaração de um ponteiro pra um inteiro
    //Operador & (Endereço de): Retorna o endereço de memória de uma variável.
    int x = 15;
    int *p = &x;
    
    printf("Valor de x: %d\n", x);
    printf("Endereço de x: %p\n", p);
    printf("Valor de x via ponteiro: %d\n", *p);

    return 0;
}