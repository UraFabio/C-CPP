/*
Fabio Seijii Ura
08/03/2023
*/

#include <stdio.h>
#define COMISSAO 0.15

int main(){
	char nome[30];
	float salario, vendas, total;
	
	printf("Digite o nome do vendedor:\n>>");
	gets(nome);
	printf("Digite o salario do vendedor:\n>>");
	scanf("%f", &salario);
	printf("Digite o valor total das vendas:\n>>");
	scanf("%f", &vendas);
	
	total = salario + (vendas*COMISSAO);
	
	printf("O funcionario %s ganhou R$%0.2f",nome, total);
	
	return 0;
}

