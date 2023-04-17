#include <stdio.h>

int main(){
    int numero, i = 1, j;
    
    printf("Digite um numero entre 2 e 20:\n>>");
    scanf("%d", &numero);
    printf("\n");
    
    if (numero < 2 || numero > 20){
    	printf("Numero invalido, digite um numero entre 2 e 20.\n");
    	return 1;
	}
	while (i <= numero){
		j = 1;
		while (j <= i){
			printf("%d", j);
			j++;
		}
		printf("\n");
		i ++;
	}
	i -= 2;
	while (i >= 1){
		j = 1;
		while (j <= i){
			printf("%d", j);
			j ++;
		}
		printf("\n");
		i --;
	}
	
	
    return 0;
}

