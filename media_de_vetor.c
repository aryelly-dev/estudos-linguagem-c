#include <stdio.h>

int main() {
    int nums[7], i;
    float soma = 0, media;

    printf("=== Media de 7 numeros ===\n");

    for (i = 0; i < 7; i++) {
        printf("    Digite o numero %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < 7; i++) {
        soma += nums[i];
    }

    media = soma / 7;

    printf("\nA media dos numeros digitados = %.2f\n", media);

    return 0;

}