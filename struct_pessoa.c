#include <stdio.h>

typedef struct Person {
    char nome[50];
    int idade;
    float altura;
} Person;

int main() {
    Person pessoa;
    
    printf("Digite o primeiro nome: ");
    scanf("%s", pessoa.nome);

    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);

    printf("Digite a altura: ");
    scanf("%f", &pessoa.altura);

    printf("\n------- DADOS -------\n");
    printf("Nome:.....%s\n", pessoa.nome);
    printf("Idade:....%d anos\n", pessoa.idade);
    printf("Altura:...%.2fm\n", pessoa.altura);

    return 0;
}