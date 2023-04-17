#include <stdio.h>
#include <math.h>

int main(){
	long long int binario, b,  decimal = 0;
	int pot = 0, a;
	
	printf("Digite um valor em binario:\n>>");
	scanf("%lld", &binario);
	
	b = binario;
	
	while (binario != 0){
		a = binario % 10;
		binario /= 10;
		decimal += a*pow(2, pot);
		pot ++;
	}
	printf("O numero %lld na base decimal eh: %lld", b, decimal);
	return 0;
}

