#include <stdio.h>

int main(){
	int ano;
	printf("Insira o ano para consulta:\n>>");
	scanf("%d", &ano);
	
	if((ano%4)==0){
		if((ano%100)==0){
			printf("O ano %d nao eh bissexto.", ano);
		}else{
			printf("O ano %d eh bissexto.", ano);
		}
	}
	else if((ano%400)==00){
		printf("O ano %d eh um ano bissexto.", ano);
		
	}else{
		printf("O ano %d nao eh um ano bissexto.", ano);
	}
	
	return 0;
}

