#include <stdio.h>
#include <math.h>

int main(){
	
	float cateto1, cateto2, hipotenusa;
	printf("Cateto 1:\n>>");
	scanf("%f", &cateto1);
	printf("Cateto 2:\n>>");
	scanf("%f", &cateto2);
	hipotenusa= pow((cateto1*cateto1)+(cateto2*cateto2), 0.5);
	printf("O valor da hipotenusa e %0.2f",hipotenusa );
	
	
	return 0;
}
