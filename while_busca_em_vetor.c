#include <stdio.h>

int main() {
    int vetor[5], i, num;

    for(i = 0; i < 5; i++) {
        printf("Preencha o vetor digitando o elemento[%d]: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite um numero a ser procurado dentro do vetor: ");
    scanf("%d", &num);

    i = 0;
    while (i < 5 && vetor[i] != num) {
        i++;
    }

    if(i < 5) {
        printf("Numero encontrado na posicao %d!\n", i + 1);
    } else { 
        printf("Numero nao encontrado!\n");
    }

    return 0;
}