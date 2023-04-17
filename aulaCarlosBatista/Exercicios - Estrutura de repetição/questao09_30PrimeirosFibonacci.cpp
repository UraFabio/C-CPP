#include <stdio.h>

int main(){
	int n1 = 1, n2 = 1, a, cont;
	
	printf("Os 30 primeiros termos da sequencia de fibonacci sao:\n");
	for (cont = 1; cont <= 30; cont ++){
		printf("%d ", n1);
		a = n1;
		n1 = n2;
		n2 += a; 
		
	}

	return 0;
}

