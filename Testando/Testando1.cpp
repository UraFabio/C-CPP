#include <stdio.h>
#include <string.h>
int main(){
	char frase[200];
	char palavra[20];
	char* ptr;
	printf("Digite a frase: ");
	gets(frase);
	printf("Digite a palavra: ");
	gets(palavra);
	ptr = strstr(frase,palavra);
	if(ptr == NULL){
		printf("A palavra %s NAO se encontra na frase\n", palavra);
	}else{
		printf("A palavra %s se encontra na frase\n", palavra);
	}
	return 0;
}

