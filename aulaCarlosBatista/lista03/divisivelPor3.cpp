#include <stdio.h>

int main(){
	int numero;
	printf("Digite um numero inteiro:\n>>");
	scanf("%d", &numero);
	if ((numero%3)==0){
		printf("O numero %d eh divisivel por 3!", numero);
		
	}else{
		printf("O numero %d nao eh divisivel por 3!", numero);
	}
	return 0;
}

