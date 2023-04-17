#include <stdio.h>
#define MAX 10

int main(){
	int vetor[MAX], total = 0; 
	float media;
	
	for (int i = 0; i < MAX; i ++){
		printf(">> ");
		scanf("%d", &vetor[i]);
		total += vetor[i]; 
		
	}
	media = (float)total/MAX;
	printf("A media aritmetica dos valores eh: %.1f", media);
	
	return 0;
}

