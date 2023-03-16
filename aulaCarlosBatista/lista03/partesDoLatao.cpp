#include <stdio.h>

int main(){
	float latao, cobre, zinco;
	printf("Insira quantos quilos de latao quer produzir:\n>>");
	scanf("%f", &latao);
	cobre = (latao*7)/10;
	zinco = (latao*3)/10;
	
	printf("Sera necessario %0.2fkg de cobre e %0.2fkg de zinco para produzir %0.2fkg de latao.", cobre, zinco, latao);
	return 0;
}

