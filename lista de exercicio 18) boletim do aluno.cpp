#include <stdio.h>

// Definição da struct
struct Aluno {
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
};

int main() {
    struct Aluno aluno;
    float media;

    // Entrada de dados
    printf("Digite o nome do aluno: ");
    fgets(aluno.nome, sizeof(aluno.nome), stdin);

    printf("Digite a primeira nota: ");
    scanf("%f", &aluno.nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &aluno.nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &aluno.nota3);

    // Cálculo da média
    media = (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3;

    // Resultado
    printf("\nAluno: %s", aluno.nome);
    printf("Média: %.2f\n", media);

    if (media >= 6.0) {
        printf("Resultado: Aprovado\n");
    } else {
        printf("Resultado: Reprovado\n");
    }

    return 0;
}