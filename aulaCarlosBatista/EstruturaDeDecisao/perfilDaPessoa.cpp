/*
Fabio Seijii Ura
14/03/2023
*/

#include <stdio.h>

int main(){
	int dia, mes, ano;
	printf("Informe o dia, mes e ano da sua data de nascimento:\n>>");
	scanf("%d %d %d", &dia, &mes, &ano);
	int op1 = ((dia*100)+mes) + ano;
	int op2 = (op1/100) + (op1%100);
	int r = op2 % 5;
	
	switch(r){
	
		case 0:
			printf("O seu perfil eh timido.");
			break;
		case 1:
			printf("O seu perfil eh sonhador.");
			break;
		case 2:
			printf("O seu perfil eh paquerador.");
			break;
		case 3:
			printf("O seu perfil eh atraente.");
			break;
		case 4:
			printf("O seu perfil eh irresistivel.");
			break;
		default:
			break;
			
	}
	
	return 0;
}
