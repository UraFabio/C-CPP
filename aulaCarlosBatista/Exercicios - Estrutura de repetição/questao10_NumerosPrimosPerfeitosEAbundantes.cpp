#include <stdio.h>

int main(){
	int numero, primos = 0, perfeitos = 0, abundantes = 0, aux, div, b = 0;
	
	for (int a = 1; a <= 30; a ++){
		printf("Digite um numero:\n>>");
		scanf("%d", &numero);
		
		if (numero == 2 || numero == 3 || numero == 5 || numero == 7){
			primos ++;
		}else if(numero == 1 || numero % 2 == 0 || numero % 3 == 0 || numero % 5 == 0 || numero % 7 == 0){
			
		}else{
			primos ++;
		}
		
		
		for (div = 1, b = 0; div < numero; div ++){
			if (numero % div == 0){
				b += div;
			}
		}
		if (b == numero){
			perfeitos ++;
		}
		
		for (div = 1, b = 0; div <= numero; div ++){
			if (numero % div == 0){
				b += div;
			}
		}
		if (b > 2*numero){
			abundantes ++;
		}
		
		printf("\nNesta iteracao:\n");
		printf("Primos: %d \nPerfeitos: %d \nAbundantes: %d \n\n", primos, perfeitos, abundantes);
	}
	
	printf("\n\nDos numeros inseridos: \n%d sao primos \n%d sao perfeitos \n%d sao abundantes\n\n", primos, perfeitos, abundantes);
		

	return 0;
}

