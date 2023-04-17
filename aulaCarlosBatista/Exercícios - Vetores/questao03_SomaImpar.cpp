#include <stdio.h>
#define MAX 5

int main(){
	int vetor_A[MAX], soma = 0;
	
	for (int cont = 0; cont < MAX; cont ++){
		printf(">> ");
		scanf("%d", &vetor_A[cont]);
		if (vetor_A[cont] % 2 != 0){
			soma += vetor_A[cont];
		}
	}

	printf("Soma: %d", soma);
	
	return 0;
}

