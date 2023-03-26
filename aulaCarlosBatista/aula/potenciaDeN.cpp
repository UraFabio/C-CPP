#include <stdio.h>
#include <math.h>

int main(){
	 long long int numero;
	 int n, base;
	
	printf("Digite a base:\n>>");
	scanf("%d", &base);
	printf("Digite um numero:\n>>");
	scanf("%lld", &numero);
	
	n = log10(numero)/log10(base);
	
	if (pow(base, n) == numero){
		printf("%lld = %d^%d", numero, base, n);
	}else{
		printf("%lld nao eh uma potencia de %d", numero, base);
	}
	
	return 0;
}

