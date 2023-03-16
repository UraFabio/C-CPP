/*
Fabio Seijii Ura
08/03/2023
*/

#include <stdio.h>

int main(){
	int nota100, nota50, nota20, nota10, nota5, nota2, moeda1, moeda050, moeda025, moeda010, moeda005, moeda001;
	float valor;
	
	printf("Digite o valor:\n>>");
	scanf("%f", &valor);
	printf("Para o valor de R$%0.2f serao necessarias:", valor);
	
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
	
	moeda1 = valor/1;
	valor -= moeda1*1;
	
	moeda050 = valor/0.50;
	valor -= moeda050*0.50;
	
	moeda025 = valor/0.25;
	valor -= moeda025*0.25;
	
	moeda010 = valor/0.10;
	valor -= moeda010*0.10;
	
	moeda005 = valor/0.05;
	valor -= moeda005*0.05;
	
	moeda001 = valor/0.01;
	

	
	
	printf("\n%d nota(s) de R$100", nota100);
	printf("\n%d nota(s) de R$50", nota50);
	printf("\n%d nota(s) de R$20", nota20);
	printf("\n%d nota(s) de R$10", nota10);
	printf("\n%d nota(s) de R$5", nota5);
	printf("\n%d nota(s) de R$2\n", nota2);
	
	printf("\n%d moeda(s) de R$1", moeda1);
	printf("\n%d moeda(s) de R$0.50", moeda050);
	printf("\n%d moeda(s) de R$0.25", moeda025);
	printf("\n%d moeda(s) de R$0.10", moeda010);
	printf("\n%d moeda(s) de R$0.05", moeda005);
	printf("\n%d moeda(s) de R$0.01", moeda001);
	
	
	
	return 0;
}

