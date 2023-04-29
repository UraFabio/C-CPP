#include <stdio.h>

int main(){
	float amigo1, amigo2, amigo3, total, premio;
	
	printf("Digite o valor investido pelo amigo 1, 2 e 3, respectivamente: \n");
	scanf("%f %f %f", &amigo1, &amigo2, &amigo3);
	total = amigo1 + amigo2 + amigo3;
	
	printf("Qual foi o total do premio?: ");
	scanf("%f", &premio);
	
	printf("O amigo 1 ira receber %.2f ", premio*(amigo1/total));
	printf("O amigo 2 ira receber %.2f ", premio*(amigo2/total));
	printf("O amigo 3 ira receber %.2f ", premio*(amigo3/total));

	return 0;
}

