#include <stdio.h>
#define MAX 10

int main(){
	int vetor1[MAX], vetor2[MAX], vetor_resultante[MAX], cont;
	
	for (cont = 0; cont < MAX; cont ++){
		printf("Digite o %d%c valor do vetor 1: ", cont+1, 167);
		scanf("%d", &vetor1[cont]);
	}
	printf("\n\n");
	
	for (cont = 0; cont < MAX; cont ++){
		printf("Digite o %d%c valor do vetor 2: ", cont+1, 167);
		scanf("%d", &vetor2[cont]);
	}
	for (cont = 0; cont < MAX; cont ++){
		vetor_resultante[cont] = vetor1[cont] * vetor2[cont]; 
	}
	printf("\n\nVetor Resultante: ");
	for (cont = 0; cont < MAX; cont ++){
		printf("%d ", vetor_resultante[cont]);
	}

	return 0;
}

