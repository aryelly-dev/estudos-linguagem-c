#include <stdio.h>

void triplicarValor(int *ponteiroNum) { 
    *ponteiroNum = *ponteiroNum * 3;
    printf("Dentro da funcao (por ref), valor apontado = %d\n", *ponteiroNum);
}

int main(void) {
    int meuNum = 10;

    triplicarValor(&meuNum); //passa o endereço de meuNum

    printf("Fora da funcao (por ref), meuNum = %d\n", meuNum); //o valor da variável altera fora da função, porque foi usado ponteiro para mudar o valor original da variável meuNum

    return 0;
}