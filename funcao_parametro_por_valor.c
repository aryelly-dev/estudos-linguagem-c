#include <stdio.h>

void triplicarValor(int num) {
    num = num * 3;
    printf("Dentro da funcao, num = %d\n", num);
    return;
}

int main(void) {
    int meuNum = 10;

    triplicarValor(meuNum); 

    printf("Fora da funcao, meuNum = %d\n", meuNum); //passagem de parâmetro por valor não altera a variável original, apenas a cópia que foi recebida pela função.

    return 0;
}