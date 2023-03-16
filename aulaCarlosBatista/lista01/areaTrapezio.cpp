#include <stdio.h>

int main(){
	
	float baseMenor, baseMaior, altura, area;
	printf("Digite o valor da base menor do trapezio:\n>>");
	scanf("%f", &baseMenor);
	printf("Digite o valor da base maior do trapezio:\n>>");
	scanf("%f", &baseMaior);
	printf("Digite o valor da altura do trapezio:\n>>");
	scanf("%f", &altura);
	area = ((baseMenor+baseMaior)/2)*altura;
	
	printf("A area da base e de %.2f", area);
	
	
	return 0;
}
