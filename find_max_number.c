#include <stdio.h>

// Function that returns the biggest of three numbers 
// Função que retorna o maior número entre três
int findMax(int number1, int number2, int number3) {
    if (number1 >= number2 && number1 >= number3) {
        return number1;
    } else if (number2 >= number1 && number2 >= number3) {
        return number2;
    } else {
        return number3;
    }
}

// Function to read and validate an integer input
// Função para ler e validar a entrada de um número inteiro
int readInt(const char* prompt) {
    int num;

    printf("%s", prompt);
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");   // "Entrada inválida. Por favor insira um número inteiro."
        return -999990;
    }
    return num;
}

int main() {
    int num1, num2, num3;

    // Input / Entrada
    num1 = readInt("Type the first number: ");    // "Digite o primeiro número: "
    if (num1 == -999990) {
        return 1;
    }

    num2 = readInt("Type the second number: ");   // "Digite o segundo número: "
    if (num2 == -999990) {
        return 1;
    }

   num3 = readInt("Type the third number: ");     // "Digite o terceiro número: "
    if (num3 == -999990) {
        return 1;
    }
    
    // Output / Saída
    printf("\nThe largest number is: %d\n", findMax(num1, num2, num3));    // "O maior número é: "

    printf("==================================\n");

    printf("Thank you for using the program!\n");    // "Obrigado por usar o programa!"

    printf("==================================\n");

    return 0;
}