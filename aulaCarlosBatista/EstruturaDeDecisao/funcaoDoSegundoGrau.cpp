#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c, delta, x1, x2;
	printf("Levando em consideração a equacao Ax^2 + Bx + C, insira os coeficientes para calcular a raizes da equacao:\nA>>");
	scanf("%f", &a);
	printf("B>>");
	scanf("%f", &b);
	printf("C>>");
	scanf("%f", &c);
	
	delta = pow(b,2) - 4*a*c;
	if(delta>0){
		x1 = (-b+pow(delta,0.5))/2*a;
		x2 = (-b-pow(delta,0.5))/2*a;
		printf("A equacao possui duas raizes reais distintas, sao elas: x1 = %0.3f e x2 = %0.3f", x1, x2);
		
		
	}
	else if(delta==0){
		x1 = (-b-pow(delta,0.5))/2*a;
		x2 = x1;
		printf("A equacao possui duas raizes reais iguais, sao elas: x1 = %0.3f e x2 = %0.3f", x1, x2);
		
	}
	else{
		printf("A equacao nao possui raizes reais.\n");
	}
	return 0;
}

