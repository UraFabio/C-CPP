#include <stdio.h>
#include <math.h>

int main(){
	float peso, altura, imc;
	printf("Insira seu peso em Kg:\n>>");
	scanf("%f", &peso);
	printf("Insira sua altura em m:\n>>");
	scanf("%f", &altura);
		
	imc = peso/(pow(altura,2));
	if (imc<18.5){
		printf("Voce esta abaixo do peso. (imc=%0.2f)", imc);
	}else if (imc>=18.5 && imc<=25){
		printf("Voce esta no peso normal. (imc=%0.2f)", imc);
	}else if (imc>25 && imc<=30){
		printf("Voce esta acima do peso. (imc=%0.2f)", imc);
		
	}else{
		printf("Voce esta obeso. (imc=%0.2f)", imc);
		
	}
	
	return 0;
}

