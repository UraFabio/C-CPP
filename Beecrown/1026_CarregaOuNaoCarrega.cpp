#include <stdio.h>

int main(){
	long long int num1, num2;
	
	while(scanf("%lld %lld", &num1, &num2) != EOF ){
		
		printf("%lld", num1^num2);
	}
	return 0;
}

