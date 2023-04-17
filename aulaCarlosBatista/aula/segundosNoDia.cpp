#include <stdio.h>

int main(){
	int segundos, horas, minutos;
	
	printf("Digite a quantidade de segundos transcorridos em um dia:\n");
	scanf("%d", &segundos);
	if (segundos<0 || segundos>86400)
		printf("Valor invalido, tente novamente");
	else{
		horas = segundos/3600;
		segundos = segundos - horas*3600;
		minutos = segundos/60;
		segundos = segundos - minutos*60;
		
		printf("O valor corresponde a %d horas, %d minutos e %d segundos", horas, minutos, segundos);
	}
	return 0;
}

