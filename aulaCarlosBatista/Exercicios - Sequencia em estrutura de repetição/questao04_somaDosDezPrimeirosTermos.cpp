#include <stdio.h>

int main(){
	int cont;
	float divisor, soma = 0;
	
	for (cont = 1, divisor = 500; cont <= 10; cont ++, divisor -= 50){
		//printf("contador = %d\ndivisor = %f\nsoma = %f\n\n", cont, divisor, soma);
		if (cont % 2 != 0)
			soma += 2/divisor;
		else
			soma -= 5/divisor;
	
	}
	printf("A soma dos dez primeiros termos da serie eh: %f\n", soma);
	
	return 0;
}

