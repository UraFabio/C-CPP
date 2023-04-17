#include <stdio.h>

int main(){
	int m = 1, divisores, cont, fatorial, soma;
	
	while (m != 0){
		divisores = 0;
		soma = 0;
		fatorial = 1;
		
		printf("\n\nInsira um numero:\n");
		scanf("%d", &m);
		if (m <= 0){
			printf("\n\nFim do programa.\n\n");
		}else if (m % 2 == 0){
			for (cont = 1; cont <= m; cont++){
				if (m % cont == 0){
					divisores ++;
				}
			}
			printf("O numero %d tem %d divisores.\n",m, divisores );
		}else{
			if (m < 10){
				for (cont = 1; cont <= m; cont++){
					fatorial *= cont;
				}
				printf("O fatorial de %d eh %d", m, fatorial);
			}else {
				for (cont = 1; cont <= m; cont++){
					soma += cont;
				}
				printf("A soma dos numeros inteiros de 1 ate %d eh %d", m, soma);
			}			
		}
	}
	
	
	return 0;
}

