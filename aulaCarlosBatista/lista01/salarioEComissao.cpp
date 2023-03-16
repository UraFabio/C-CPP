#include <stdio.h>

int main(){
	float salario, vendas, salarioFinal, comissao;
	
	printf("Qual o salario do funcionario?:\n>>");
	scanf("%f", &salario);
	printf("Qual o valor das vendas?:\n>>");
	scanf("%f", &vendas);
	comissao = vendas*0.04;
	salarioFinal = salario+comissao;
	
	printf("O salario final e de R$%.2f", salarioFinal);
	
	
	return 0;
}
