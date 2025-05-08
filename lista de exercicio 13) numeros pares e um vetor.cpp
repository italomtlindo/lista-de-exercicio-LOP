#include <stdio.h>

int main() {
    int i, num, pares = 0;

    printf("Digite 10 números inteiros:\n");

    for (i = 1; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            pares++;
        }
    }

    printf("\nQuantidade de números pares: %d\n", pares);

    return 0;
}