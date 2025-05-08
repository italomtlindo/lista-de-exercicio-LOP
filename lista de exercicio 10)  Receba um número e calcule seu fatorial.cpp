#include <stdio.h>

int main() {
    int n, i;
    int fatorial = 1;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Fatorial não está definido para números negativos.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fatorial *= i;
        }
        printf("Fatorial de %d é %llu\n", n, fatorial);
    }

    return 0;
}