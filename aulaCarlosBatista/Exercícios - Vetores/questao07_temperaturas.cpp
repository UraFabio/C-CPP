#include <stdio.h>
#define MAX 7

int main(){
	char dias_da_semana[MAX][10] = {"Domingo", "Segunda", "Terca", "Quarta", "Quinta", "Sexta", "Sabado"};
	int temperaturas[MAX], i, soma = 0;
	float media;
	
	printf("Digite a temperatura de:\n\n ");
	for (i = 0; i < MAX; i ++){
		printf("%s: ", dias_da_semana[i]);
		scanf("%d", &temperaturas[i]);
		soma += temperaturas[i];
	}
	media = (float)soma/MAX;
	printf("\n\nDias da semana que ficaram acima da media de temperatura( %.1f%cC ):\n", media, 167 );
	for (i = 0; i < MAX; i ++){
		if (temperaturas[i] > media){
			printf("%s\n", dias_da_semana[i]);
		}
	}
	
	return 0;
}

