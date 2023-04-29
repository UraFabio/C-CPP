#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
	char frase[100], letra;
	int tamanho, contador = 0;
	
	printf("DIgite a frase: ");
	fgets(frase, sizeof(frase), stdin);
	printf("DIgite a letra a ser procurada");
	scanf(" %c", &letra );
	
	tamanho = strlen(frase);
	for (int i = 0; i < tamanho; i ++){
		if (frase[i] == letra){
			contador ++;
		}
	}
	
	printf("A letra '%c' ocorreu %d vezes na frase.", letra, contador);
	
	

	return 0;
}

