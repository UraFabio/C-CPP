#include <stdio.h>

#define MAX 100
int main(){
	char vetor1[MAX], vetor2[MAX];
	
	printf("Digite os valores do vetor 1:\n");
	for(int i = 0; i < MAX; i ++){
		printf("%d elemento: ", i +1);
		scanf("%c", &vetor[i])
	}
	

	
	for(int i = 0; i < MAX; i ++){
		vetor2[i] = vetor1[MAX - 1 - i]; 
	}
	
	printf("vetor1: %s \n vetor2: %s", vetor1, vetor2);

	return 0;
}

