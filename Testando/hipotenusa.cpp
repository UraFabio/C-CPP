#include <stdio.h>
#include <math.h>

int main(){
	float cateto1, cateto2, hipotenusa;
	printf("Cateto 1:");
	scanf("%f", &cateto1);
	printf("Cateto 2:");
	scanf("%f", &cateto2);
	hipotenusa= pow((cateto1*cateto1)+(cateto2*cateto2), 0.5);
	printf("hipotenusa é %0.2f",hipotenusa );
	return 0;
}
