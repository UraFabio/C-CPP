#include <stdio.h>

int main(){
	int anoNascimento, anoAtual, idade;
	char nome[30];
	
	printf("Em que ano estamos?:\n>>");
	scanf("%d", &anoAtual);
	fflush(stdin);
	printf("Digite seu nome:\n>>");
	gets(nome);
	printf("Qual seu ano de nascimento?:\n>>");
	scanf("%d", &anoNascimento);
	
	idade = anoAtual - anoNascimento;
	printf("Ola %s!, voce tem %d anos.", nome, idade);
	
	
	
	return 0;
}
