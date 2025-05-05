#include <stdio.h>
#include <locale.h>

int main () {
	int numero1, numero2;
	
	printf("digite o primeiro numero: \n");
	scanf("%d",&numero1);
	
	printf("digite o segundo numero: \n");
	scanf("%d",&numero2);
	
	if (numero1 > numero2) {
		printf("o primeiro numero é maior q o segundo: \n");
	} else if (numero2 > numero1) {
		printf("o segundo numero é maior q o primiero: \n");
	} else  {
		printf("os dois numero sao iguais: \n");
	}
	return 0;
}