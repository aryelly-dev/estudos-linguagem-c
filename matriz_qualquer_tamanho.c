#include <stdio.h>
#define TOTAL_LINHAS 4 //mudar aqui a quantidade de linhas
#define TOTAL_COLUNAS 3 //mudar aqui a quantidade de colunas

int main() {
    int matriz[TOTAL_LINHAS][TOTAL_COLUNAS], i, j;

    for (i = 0; i < TOTAL_LINHAS; i++) {

        for (j = 0; j < TOTAL_COLUNAS; j++) {
            printf("Digite o elemento[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n======= MATRIZ =======\n");

    for (i = 0; i < TOTAL_LINHAS; i++) {

        for (j = 0; j < TOTAL_COLUNAS; j++) {
            printf(" %4d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;

}