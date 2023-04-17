#include <stdio.h>

int main(){
	
	float h, dividendo, divisor ;
	
	for (h = 0, dividendo = 1, divisor = 1; dividendo <= 99; dividendo += 2, divisor ++){
		h += dividendo/divisor;
		printf("H = %f \ndividendo = %f \ndivisor = %f \n\n", h, dividendo, divisor);
	}
	printf("O valor de H eh: %0.2f\n", h);
	
	return 0;
}
