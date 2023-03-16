#include <stdio.h>
#include <math.h>

int main(){
	int numero;
	printf("Digite um numero entre 1000 e 10000:\n>>");
	scanf("%d", &numero);
	if (numero<=1000 || numero>=10000){
		printf("ERRO! numero fora de alcance. Tente novamente.");
		
	}
	else{
		if(pow((numero/100)+(numero%100), 2) == numero){
			printf("O numero satisfaz a caracteristica: %d = (%d + %d)^2", numero, numero/100, numero%100);
		}
		else{
			printf("O numero nao satisfaz a caracteristica");
		}
	}
	return 0;
}

