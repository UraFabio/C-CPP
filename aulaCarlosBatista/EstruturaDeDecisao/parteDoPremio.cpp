#include <stdio.h>

int main(){
	float amigo1, amigo2, premioTotal, pctamg1, pctamg2, premio1, premio2;
	printf("Digite a quantia que o primeiro amigo contribuiu e depois a quantidade que o segundo amigo contribuiu:\n>>");
	scanf("%f", &amigo1);
	printf("\n>>");
	scanf("%f", &amigo2);
	printf("Digite o valor do premio:\n>>");
	scanf("%f", &premioTotal);
	
	pctamg1 = (amigo1*100)/(amigo1 + amigo2);
	pctamg2 = (amigo2*100)/(amigo1 + amigo2);
	
	premio1 = premioTotal*(pctamg1/100);
	premio2 = premioTotal*(pctamg2/100);
	
	printf("Caso os dois amigos ganhem o premio, o amigo 1 ficara com %0.2f%% do valor (R$%0.2f) e o amigo 2 ficara com %0.2f%% do valor (R$%0.2f).", pctamg1, premio1, pctamg2, premio2);
	return 0;
}

