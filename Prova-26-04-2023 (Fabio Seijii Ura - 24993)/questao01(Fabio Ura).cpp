
#include <stdio.h>

int main(){
	int matricula, final;
	
	printf("Insira sua matricula: ");
	scanf("%d", &matricula);
	
	final = matricula%100;
	if (final >= 10 && final <= 39){
		printf("Sua mensalidade vence no primeiro dia util.\n");
	}else if(final >= 40 && final <= 69){
		printf("Sua mensalidade vence no segundo dia util.\n");
	}else{
		printf("Sua mensalidade vence no terceiro dia util.\n");
	}
	
	

	return 0;
}

