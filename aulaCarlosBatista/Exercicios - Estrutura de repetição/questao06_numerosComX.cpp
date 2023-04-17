#include <stdio.h>

int main(){
	int numero, i = 1, j = 0, a, b = 0, k;
	
	printf("Digite um numero entre 2 e 20:\n>>");
	scanf("%d", &numero);
	printf("\n");
	
	if (numero < 2 || numero > 20){
		printf("Numero invalido, digite um numero entre 2 e 20.\n");
		return 1;
	}
	while (i <= numero){
		b = 1;	
		k = j;	
		for (a = 1; a <= numero; a++){
			if (k > 0){
				printf("x");
				k --;
			}else {
				printf("%d", b);
				b ++;
			}
		}
		i ++;
		j ++;
		printf("\n");
	}
	
	

	return 0;
}

