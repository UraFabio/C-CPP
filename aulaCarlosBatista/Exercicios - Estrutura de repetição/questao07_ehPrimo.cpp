#include <stdio.h>

int main(){
	int numero, a = 2;
	
	printf("Digite um numero:\n>>");
	scanf("%d", &numero);
	
	if (numero == 2 || numero == 3 || numero == 5 || numero == 7){
		printf("O numero %d eh primo!\n", numero);
	}else if(numero == 1 || numero % 2 == 0 || numero % 3 == 0 || numero % 5 == 0 || numero % 7 == 0){
		printf("O numero %d NAO eh primo!\n", numero);
	}else{
		printf("O numero %d eh primo!\n", numero);
	}

	return 0;
}

