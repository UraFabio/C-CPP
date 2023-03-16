#include <stdio.h>

int main(){
	
	float raio, comprimento, area, volume, pi;
	pi = 3.14;
	printf("Qual o comprimento do raio?:");
	scanf("%f", &raio);
	comprimento = 2*pi*raio;
	area = pi*raio*raio;
	volume = 3*(pi*raio*raio*raio)/4;
	printf("O comprimento é de %0.2f\nA area e de %0.2f\nO volume e de %0.2f",comprimento, area, volume);
	
	
	return 0;
}
