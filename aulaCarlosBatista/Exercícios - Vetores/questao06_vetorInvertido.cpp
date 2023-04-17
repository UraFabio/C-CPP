#include <stdio.h>
#define MAX 10

int main(){
	int vetor_1[MAX], vetor_2[MAX], tamanho;
	
	for (int i = 0; i < MAX; i ++){
		printf(">> ");
		scanf("%d", &vetor_1[i]);
		vetor_2[MAX - 1 - i] = vetor_1[i];
	}
	printf("\n");
	
	printf("Primeiro vetor: \n");
	for (int i = 0; i < MAX; i ++){
		printf("%d ", vetor_1[i]);
	}
	printf("\n");
	
	printf("Segundo vetor: \n");
	for (int i = 0; i < MAX; i ++){
		printf("%d ", vetor_2[i]);
	}

	return 0;
}

