#include <stdio.h>
#define MAX 15

int main(){
	int vetor[MAX], i, maior, posicao_maior, menor, posicao_menor;
	
	printf("Digite os valores do vetor:\n");
	for (i = 0; i < MAX; i ++){
		printf(">> ");
		scanf("%d", &vetor[i]);
	}
	
	maior = vetor[0];
	posicao_maior = 0;
	for (i = 1; i < MAX; i ++){
		if (vetor[i] > maior){
			maior = vetor[i];
			posicao_maior = i;
		}
	}
	menor = vetor[0];
	posicao_menor = 0;
	
	for (i = 1; i < MAX; i ++){
		if (vetor[i] < menor){
			menor = vetor[i];
			posicao_menor = i;
		}
	}
	printf("Maior valor: %d , na posicao %d\n", maior, posicao_maior);
	printf("Menor valor: %d , na posicao %d\n", menor, posicao_menor);
	return 0;
}

