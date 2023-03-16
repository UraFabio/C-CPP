/*
Fabio Seijii Ura
08/03/2023
*/

#include <stdio.h>
#include <math.h>

int main(){
	float x1, y1, x2, y2, distancia;
	
	printf("Digite os valores do ponto1 (X1 e Y1 respectivamente):\n>>");
	scanf("%f",&x1);
	printf(">>");
	scanf("%f", &y1);
	printf("Agora digite os valores do ponto2 (X2 e Y2 respectivamente):\n>>");
	scanf("%f",&x2);
	printf(">>");
	scanf("%f", &y2);
	
	distancia = pow(pow(x2-x1,2)+pow(y2-y1,2), 0.5);
	
	printf("A distacia entre o ponto1 e o ponto2 eh de %0.4f u", distancia);
	
	return 0;
}

