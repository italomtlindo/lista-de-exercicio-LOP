#include <stdio.h>

int main() {
    int opcao;
    float a, b, resultado;

    do {
        printf("\nMenu:\n");
        printf("1. Somar\n");
        printf("2. Subtrair\n");
        printf("3. Sair\n");
        printf("Escolha uma opção (1-3): ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Digite o primeiro número: ");
                scanf("%f", &a);
                printf("Digite o segundo número: ");
                scanf("%f", &b);
                resultado = a + b;
                printf("Resultado da soma: %.2f\n", resultado);
                break;
            case 2:
                printf("Digite o primeiro número: ");
                scanf("%f", &a);
                printf("Digite o segundo número: ");
                scanf("%f", &b);
                resultado = a - b;
                printf("Resultado da subtração: %.2f\n", resultado);
                break;
            case 3:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while(opcao != 3);

    return 0;
}
