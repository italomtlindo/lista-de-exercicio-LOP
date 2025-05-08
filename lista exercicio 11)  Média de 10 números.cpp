#include <stdio.h>

int main() {
    int i;
    float num, soma = 0, media;

    printf("Digite 10 números para calcular a média:\n");

    // Recebe 10 números e a soma
    for (i = 1; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%f", &num);
        soma += num;
    }

    // Calculo da média
    media = soma / 10;

    printf("A média dos 10 números é: %.2f\n", media);

    return 0;
}