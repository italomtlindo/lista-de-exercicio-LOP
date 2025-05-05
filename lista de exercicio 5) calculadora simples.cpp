#include <stdio.h>

int main() {
    double num1, num2;
    char operador;
    char continuar;

    do {
        printf("Digite o primeiro número: ");
        scanf("%lf", &num1);

        printf("Digite o operador (+, -, *, /): ");
        scanf(" %c", &operador);  // o espaço ignora enter anterior

        printf("Digite o segundo número: ");
        scanf("%lf", &num2);

        switch (operador) {
            case '+':
                printf("Resultado: %.2lf\n", num1 + num2);
                break;
            case '-':
                printf("Resultado: %.2lf\n", num1 - num2);
                break;
            case '*':
                printf("Resultado: %.2lf\n", num1 * num2);
                break;
            case '/':
                if (num2 != 0)
                    printf("Resultado: %.2lf\n", num1 / num2);
                else
                    printf("Erro: divisão por zero!\n");
                break;
            default:
                printf("Operador inválido.\n");
        }

        printf("Deseja realizar outra operação? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("Programa encerrado.\n");
    return 0;
}
