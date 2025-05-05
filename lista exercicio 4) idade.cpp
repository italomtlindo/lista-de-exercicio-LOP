#include <stdio.h>

int main () {
	int idade;
	
	printf("informe sua idade: \n");
	scanf("%d", &idade);
	
	if (idade < 16) {
		printf("voce nao pode votar: \n");
	}else if (idade >=16 && idade < 18 || idade >= 70) {
		printf("voce pode votar se quiser");
	}else{
		printf("voce e obrigado a votar");
	}
	return 0;
}