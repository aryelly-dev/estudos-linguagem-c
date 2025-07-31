#include <stdio.h>

int sumNumbers(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int number1, number2, result;

    printf("Digite um numero: ");
    scanf("%d", &number1);

    printf("Digite outro numero: ");
    scanf("%d", &number2);

    result = sumNumbers(number1, number2);

    printf("\nA soma entre %d e %d = %d\n", number1, number2, result);

    return 0;
}