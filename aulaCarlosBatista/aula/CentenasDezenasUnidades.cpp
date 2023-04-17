#include <stdio.h>

int main(){
	int valor, centenas, dezenas, unidades;

	printf("Digite um numero de 3 digitos:\n");
	scanf("%d", &valor);
	if (valor<100 || valor>999)
		printf("Numero invalido, digite um numero de 3 digitos.\n");
	else{
		centenas = valor/100;
		valor = valor - centenas*100;
		dezenas = valor/10;
		valor = valor - dezenas*10;
		unidades = valor/1;
		
		printf("%d centenas\n%d dezenas\n%d unidades", centenas, dezenas, unidades);
	}
	
	return 0;
}

