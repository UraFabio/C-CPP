#include <stdio.h>
#define MAX 10

int main(){
	int vetor_1[MAX], vetor_2[MAX], vetor_3[MAX], i;
	
	printf("Digite os 10 valores do vetor 1:\n");
	for (i = 0; i < MAX; i ++){
		printf(">> ");
		scanf("%d", &vetor_1[i]);
		vetor_3[i] = vetor_1[i];
	}
	printf("\n\n");
	printf("Digite os 10 valores do vetor 2:\n");
	for (i = 0; i < MAX; i ++){
		printf(">> ");
		scanf("%d", &vetor_2[i]);
		vetor_3[i] += vetor_2[i];
	}
	printf("\n\nVetor 3:\n");
	for (i = 0; i < MAX; i ++){
		printf("%d ", vetor_3[i]);
	}

	return 0;
}

