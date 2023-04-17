#include <stdio.h>
#include <math.h>

int main(){
	long long int n, a, cont = 0, binario = 0;
	
	printf("Digite um numero inteiro:\n>>");
	scanf("%lld", &n);
	
	a = n;
	while (a != 0 ){
		binario += (a%2)*pow(10, cont);
		a /= 2;
		cont ++;
	}
	printf("%lld em binario eh: %lld", n, binario);
	
	
	return 0;
}

