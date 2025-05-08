#include <stdio.h>
#include <string.h>

// Definindo a struct Pessoa
struct Pessoa {
    char nome[100];
    int idade;
};

int main() {
    struct Pessoa pessoa1, pessoa2;

    // Leitura da primeira pessoa
    printf("Digite o nome da primeira pessoa: ");
    fgets(pessoa1.nome, sizeof(pessoa1.nome), stdin);

    printf("Digite a idade da primeira pessoa: ");
    scanf("%d", &pessoa1.idade);
    getchar(); // Limpa o \n do buffer

    // Leitura da segunda pessoa
    printf("Digite o nome da segunda pessoa: ");
    fgets(pessoa2.nome, sizeof(pessoa2.nome), stdin);

    printf("Digite a idade da segunda pessoa: ");
    scanf("%d", &pessoa2.idade);

    // Comparação das idades
    printf("\n");
    if (pessoa1.idade > pessoa2.idade) {
        printf("%sé mais velha.\n", pessoa1.nome);
    } else if (pessoa2.idade > pessoa1.idade) {
        printf("%sé mais velha.\n", pessoa2.nome);
    } else {
        printf("Ambas têm a mesma idade.\n");
    }

    return 0;
}