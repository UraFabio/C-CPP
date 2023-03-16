/*
Fabio Seijii Ura
08/03/2023
*/

#include <stdio.h>

int main(){
	int valor, nota100, nota50, nota20, nota10, nota5, nota2, nota1;
	
	printf("Digite o valor:\n>>");
	scanf("%d", &valor);
	printf("Para o valor de R$%d serao necessarias:", valor);
	nota100 = valor/100;
	valor -= nota100*100;
	nota50 = valor/50;
	valor -= nota50*50;
	nota20 = valor/20;
	valor -= nota20*20;
	nota10 = valor/10;
	valor -= nota10*10;
	nota5 = valor/5;
	valor -= nota5*5;
	nota2 = valor/2;
	valor -= nota2*2;
	nota1 = valor/1;
	valor -= nota1*1;
	
	printf("\n%d nota(s) de R$100", nota100);
	printf("\n%d nota(s) de R$50", nota50);
	printf("\n%d nota(s) de R$20", nota20);
	printf("\n%d nota(s) de R$10", nota10);
	printf("\n%d nota(s) de R$5", nota5);
	printf("\n%d nota(s) de R$2", nota2);
	printf("\n%d nota(s) de R$1", nota1);
	
	return 0;
}

