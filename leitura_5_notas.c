#include <stdio.h>

int main() {
    float notas[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    printf("\n=== NOTAS ===\n\n");
    printf("%-7s %s\n", "Nota", "Valor");

    for (i = 0; i < 5; i++)  {
        printf(" %-6d %5.2f\n", i + 1, notas[i]);
    }

    return 0;
}