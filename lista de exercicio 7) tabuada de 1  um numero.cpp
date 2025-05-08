#include <stdio.h>

int main() {
    int numero;

    // Entrada do usuário
    printf("Digite um numero para ver a tabuada: ");
    scanf("%d", &numero);

    // Exibe a tabuada de 1 a 10
    printf("Tabuada do %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}