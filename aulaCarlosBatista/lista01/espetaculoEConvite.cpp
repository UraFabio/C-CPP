#include <stdio.h>

int main(){
	float espetaculo, precoConvite;
	int convitesMinimos;
	
	printf("Qual o custo do espetaculo?:\n>>");
	scanf("%f", &espetaculo);
	printf("Qual o preco do convite?:\n>>");
	scanf("%f", &precoConvite);
	
	convitesMinimos = espetaculo/precoConvite;
	printf("Deve-se vender no minimo %d convites", convitesMinimos);
	
	
	return 0;
}
