#include <stdio.h>

int main(){
	float s = 0, n;
	
	scanf("%f", &n);
	
	if (n <= 0){
		printf("'N' deve ser um numero inteiro e positivo, tente novamente.\n ");
	}else{
		while(n >= 1){
			s += 1/n;
			n --;
		}
		printf("O valor de 's' eh: %0.4f\n", s);
	}
	return 0;
}

