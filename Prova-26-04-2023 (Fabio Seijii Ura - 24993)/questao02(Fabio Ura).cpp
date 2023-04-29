#include <stdio.h>

int main(){
	int a = 1, numero;
	
	for(numero = 0; a <= 100; a ++){
		printf("%d", a*a);
		if(a != 100){
			printf(", ");
		}
	}

	return 0;
}

