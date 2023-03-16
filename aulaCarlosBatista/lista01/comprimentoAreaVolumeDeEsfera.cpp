/*
Autor: Fabio Ura
08/03/2023
*/

#include <stdio.h>
#define PI 3.14

int main(){
	
	float raio, comprimento, area, volume;
	printf("Digite o valor do raio:\n>>");
	scanf("%f", &raio);
	
	comprimento = 2*PI*raio;
	area = PI*raio*raio;
	volume = ((PI*raio*raio*raio)*3)/4;
	
	printf("O comprimento e de %0.2f\nA area e de %0.2f\nO volume e de %0.2f", comprimento, area, volume);
	
	
	return 0;
}
