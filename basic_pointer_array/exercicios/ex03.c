//Crie uma função que troque os valores de duas variáveis inteiras utilizando ponteiros. Teste essa função no main.

void swap(int *a, int *b){
    int temp = *a; //variavel temporaria para armazenar temporariamente um valor anterior
    *a = *b;
    *b = temp;
}

int main(){
    int x = 10;
    int y = 20;

    printf("Antes da troca - X:%d | Y:%d\n", x, y);

    swap(&x, &y);

    printf("Depois da troca - X:%d | Y:%d", x, y);

    return 0;
}