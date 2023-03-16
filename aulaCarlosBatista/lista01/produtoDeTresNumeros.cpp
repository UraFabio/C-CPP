#include <stdio.h>

int main(){
	float n1, n2, n3, resultado;
	printf("Digite o primeiro numero:\n>>");
	scanf("%f", &n1);
	printf("Digite o segundo numero:\n>>");
	scanf("%f", &n2);
	printf("Digite o terceiro numero:\n>>");
	scanf("%f", &n3);
	
	resultado = n1*n2*n3;
	
	printf("%.2f * %.2f * %.2f = %.10f", n1, n2, n3, resultado);
	
	
	return 0;
}
