#include <stdio.h>
#define MAX 20

int main(){
	int valores[MAX], cont, pares = 0;
	
	for(cont = 0; cont < MAX; cont ++){
		printf("Digite o %d%c elemento: ",cont+1, 167);
		scanf("%d", &valores[cont]);
		
		if (valores[cont] % 2 == 0){
			pares ++;
		}
		
	}
	printf("\n");
	printf("Vetor: ");
	for (cont = 0; cont < MAX; cont ++){
		printf("%d ", valores[cont]);
	}
	
	printf("\n\nDos 20 elementos inseridos, %d sao pares.\n", pares);
	

	return 0;
}

