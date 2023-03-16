/*
Fabio Seijii Ura
08/03/2023
*/

#include <stdio.h>
#define KMPORLITRO 12

int main(){
	int tempoGasto, velocidadeMedia;
	float distanciaPercorrida, gastoDeCombustivel;
	
	printf("Digite o tempo gasto na viagem:\n>>");
	scanf("%d", &tempoGasto);
	printf("Digite a velocidade media da viagem (em km/h):\n>>");
	scanf("%d", &velocidadeMedia);
	distanciaPercorrida = tempoGasto*velocidadeMedia;
	
	gastoDeCombustivel = distanciaPercorrida/KMPORLITRO;
	
	printf("O gasto total de combustivel na viagem foi de %0.3f litros.", gastoDeCombustivel);
	
	return 0;
}

