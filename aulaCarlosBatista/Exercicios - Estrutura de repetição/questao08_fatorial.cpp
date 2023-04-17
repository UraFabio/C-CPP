#include <stdio.h>

int main(){
	int n, a = 1, resultado = 1;
	
	printf("Digite um numero:\n>>");
	scanf("%d", &n);
	
	if (n == 0){
		printf("O fatorial de 0 eh 1.");
	}else{
		while (a <= n){
			resultado *= a;
			a ++;
		}
		printf("O fatorial de %d eh %d.", n, resultado);
		
	}

	return 0;
}

