#include <stdio.h>

int main() {
    int vetor[5];

    // Leitura do vetor
    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Impressão do vetor invertido
    printf("Vetor invertido:\n");
    for (int i = 4; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }

    printf("\n");
    return 0;
}