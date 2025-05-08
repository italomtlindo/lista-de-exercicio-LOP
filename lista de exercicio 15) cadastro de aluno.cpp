#include <stdio.h>

// Definindo a struct Aluno
struct Aluno {
    char nome[100];
    int idade;
    float nota;
};

int main() {
    struct Aluno aluno;

    // Cadastro do aluno
    printf("Digite o nome do aluno: ");
    fgets(aluno.nome, sizeof(aluno.nome), stdin);

    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno.idade);

    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno.nota);

    // Imprimindo os dados do aluno
    printf("\n--- Dados do Aluno ---\n");
    printf("Nome: %s", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Nota: %.2f\n", aluno.nota);

    return 0;
}
