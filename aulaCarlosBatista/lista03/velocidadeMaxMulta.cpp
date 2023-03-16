#include <stdio.h>

int main(){
	int velMax, vel, velAcima, multa;
	printf("Qual a velocidade do motorista?:\n>>");
	scanf("%d", &vel);
	printf("Qual a velocidade maxima na aavenida?:\n>>");
	scanf("%d", &velMax);
	
	velAcima = vel-velMax;
	if (velAcima>0){
		multa = velAcima*5;
		printf("Voce recebera uma multa de R$%d", multa);
	}else{
		printf("Dentro do limite de velocidade, voce nao recebera multas.");
	}
	
	return 0;
}

