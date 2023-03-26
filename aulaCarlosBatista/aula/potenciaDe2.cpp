#include <stdio.h>
#include <math.h>

int main(){
	 long long int numero;
	 int n;
	
	printf("Digite um numero:\n>>");
	scanf("%lld", &numero);
	
	n = log2(numero);
	if (pow(2, n) == numero){
		printf("%lld = 2^%d", numero, n);
	}else{
		printf("%lld nao eh uma potencia de 2", numero);
	}
	
	return 0;
}

