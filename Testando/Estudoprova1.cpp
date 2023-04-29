#include <stdio.h>

int main(){
	float gasolina, alcool;
	
	printf("Digite o preco da gasolina: ");
	scanf("%d", &gasolina);
	printf("Digite o preco do alcool: ");
	scanf("%d", &alcool);
	
	if (alcool <= gasolina*0.7){
		printf("O alcool eh a melhor opcao.\n");
	}else{
		printf("A gasolina eh a melhor opcao.\n");
	}

	return 0;
}

