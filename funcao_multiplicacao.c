#include <stdio.h>

int multiplicar(int number1, int number2) {
    return(number1 * number2);
}

int main(void) {
    int num1, num2, res;

    printf("\n======= Multiplicacao =======\n");

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    res = multiplicar(num1, num2);

    printf("\nResultado = %d\n\n", res);

    return 0;
}