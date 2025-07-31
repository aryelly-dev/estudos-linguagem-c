#include <stdio.h>

// Function to display all elements of a vector
// Função para exibir todos os elementos de um vetor
void showVector(int vector[], int size) {
    int i;

    printf("Vector elements: \n");   // "Elementos do vetor: "

    for (i = 0; i < size; i++) {
        printf("\t%d\n", vector[i]);
    }
}

int main(void) {
    int vec[5] = {1, 2, 3, 4, 5};

    // Call the function with the vector and its size
    // Chama a função com o vetor e seu tamanho
    showVector(vec, sizeof(vec)/sizeof(vec[0]));

    printf("End of vector display!\n\n");   // "Fim da exibição do vetor!"

    return 0;
}