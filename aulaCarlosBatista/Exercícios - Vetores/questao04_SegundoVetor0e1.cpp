#include <stdio.h>
#define MAX 10

int main(){
	int vetor[MAX], segundo_vetor[MAX];
	
	for (int i = 0; i < MAX; i ++){
		printf(">> ");
		scanf("%d", &vetor[i]);
		if (vetor[i] % 2 == 0){
			segundo_vetor[i] = 0;
		}else{
			segundo_vetor[i] = 1;
		}
	}
	
	printf("\nPrimeiro vetor:\n");
	for (int i = 0;i < MAX; i ++){
		printf("%d ", vetor[i]);
	}
	printf("\n\n");
	printf("Segundo vetor: \n");
	for (int i = 0;i < MAX; i ++){
		printf("%d ", segundo_vetor[i]);
    }
	return 0;
}

