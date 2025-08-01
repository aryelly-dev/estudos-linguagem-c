#include <stdio.h>
#include <math.h>

// Function that checks if a number is prime
// Função que verifica se um número é primo
int isPrime(int number) {
    int i;

    if (number <= 1) {
        return 0;   // Not prime / Não é primo
    } 

    for (i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return 0;   // Found a divisor, so it's not prime / Encontrou um divisor, então não é primo
        }
    }

    return 1;   // Didn't find any divisor, so it's prime / Não encontrou nenhum divisor, então é primo
}

int main() {
    int num;

    // Input / Entrada
    printf("Enter a number: ");  // "Digite um número: "
    scanf("%d", &num);

    // Output / Saída
    if (isPrime(num)) {
        printf("It is a prime number!\n");  //"É um número primo!"
    } else {
        printf("It is not a prime number!\n");  // "Não é um número primo"
    }

    return 0;
}