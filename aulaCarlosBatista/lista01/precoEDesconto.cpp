#include <stdio.h>

int main(){
	float preco, novoPreco;
	printf("Digite o preco do produto:\n>>");
	scanf("%f", &preco);
	novoPreco = preco*0.9;
	printf("O novo preco e de R$%.2f", novoPreco);
	
	
	
	return 0;
}
