#include <stdio.h>

int main () {
	float nota1, nota2, media;
	
	printf("digite a primeira nota: \n");
	scanf("%f", &nota1);
	
	printf("digite a segunda nota; \n");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) /2;
	 if (media >=7) {
	 	printf("o aluno foi aprovado com media %.2f \n", media);
	 }else{
	 	printf("o aluno foi reprovado com media %.2f \n", media);
	 }
	 return 0;
}