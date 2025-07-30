#include <stdio.h>
#include <string.h>

typedef struct Livro {
    char titulo[100];
    char autor[60];
    int anoPublicacao;
} Livro;

int main() {
    Livro meuLivro;

    strcpy(meuLivro.titulo, "Entendendo Algoritmos: Um guia ilustrado para programadores e outros curiosos");
    strcpy(meuLivro.autor, "Aditya Y. Bhargava");
    meuLivro.anoPublicacao = 2017;

    printf("\n=============================== INFORMACOES DO LIVRO ===============================\n");
    printf("Nome- %s\n", meuLivro.titulo);
    printf("Autor(a)- %s\n", meuLivro.autor);
    printf("Ano de Publicacao- %d\n", meuLivro.anoPublicacao);

    return 0;
}