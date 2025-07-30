#include <stdio.h>

int main() {
    int vetor[5], i, num, encontrado = 0;

    for(i = 0; i < 5; i++) {
        printf("Preencha o vetor digitando o elemento[%d]: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite um numero a ser procurado dentro do vetor: ");
    scanf("%d", &num);

    for(i = 0; i < 5; i++) {
        if (num == vetor[i]) {
            printf("Numero encontrado na posicao %d!\n", i + 1);
            encontrado = 1;
            break;
        }
    } 
    
    if (!encontrado) {
        printf("Numero nao encontrado!\n");
    } 
    

    return 0;
}