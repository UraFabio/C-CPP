#include <stdio.h>

int main(){
	float s, dividendo, divisor;
	
	for (dividendo = 1; dividendo <= 10; dividendo ++){
		divisor = dividendo*dividendo;
		if ((int)dividendo % 2 == 0){
			dividendo *= -1;
			s += dividendo/divisor;
			dividendo *= -1;
		}
		s += dividendo/divisor;
	}
	printf("O valor de s eh: %0.4f", s);
	
	return 0;
}

