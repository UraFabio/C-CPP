#include <stdio.h>

int main(){
	
	int numero1, numero2, resultado;
	printf("Digite o primeiro numero:\n>>");
	scanf("%d", &numero1);
	printf("Digite o segundo numero:\n>>");
	scanf("%d", &numero2);
	resultado = numero1-numero2;
	printf("%d - %d = %d", numero1, numero2, resultado );
	
	return 0;
}
