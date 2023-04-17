#include <stdio.h>

int main(){
	int dia, mes, ano;
	
	printf("Insira o dia, mes e ano, no formato dd/mm/aaa:\n");
	scanf("%d/%d/%d", &dia, &mes, &ano);
	
	if ((dia<1 || dia>31)||(mes<1 || mes>12)){
		printf("Data invalida, digite uma data valida.\n");
	}else{
		if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
			printf("Data valida: %d/%d/%d\n", dia, mes, ano);
		}else if (mes==4 || mes==6 || mes==9 || mes==11){
			if (dia>30){
				printf("Data invalida, o mes selecionado tem apenas 30 dias\n");
			}else{
				printf("Data valida: %d/%d/%d", dia, mes, ano);
			}
		}else{
			if (dia>28){
				printf("Data invalida, o mes selecionado tem apenas 28 dias\n");
			}else{
				printf("Data valida: %d/%d/%d", dia, mes, ano);
			}
		}
		
	}
	return 0;
}

