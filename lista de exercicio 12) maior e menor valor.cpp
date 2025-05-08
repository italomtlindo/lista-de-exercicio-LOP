#include <stdio.h>

int main() {
    int i;
    float num, maior, menor;

    printf("Digite 10 números:\n");

    for (i = 1; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%f", &num);

        if (i == 1) {
            // O primeiro número serve como referência inicial
            maior = menor = num;
        } else {
            if (num > maior)
                maior = num;
            if (num < menor)
                menor = num;
        }
    }

    printf("\nMaior número: %.2f\n", maior);
    printf("Menor número: %.2f\n", menor);

    return 0;
}