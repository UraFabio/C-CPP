#include <stdio.h>

int main(){
	float horasTrabalhadas, valorDaHora, salario;
	printf("Digite as horas trabalhadas:\n>>");
	scanf("%f", &horasTrabalhadas);
	printf("Digite o valor da hora\n>>");
	scanf("%f", &valorDaHora);
	
	if (horasTrabalhadas<=40){
		salario = horasTrabalhadas*valorDaHora;
		printf("O seu salario semanal eh de R$%0.2f", salario);
	}
	else if (horasTrabalhadas>40 && horasTrabalhadas<=60){
		salario = (horasTrabalhadas*valorDaHora)*1.5;
		printf("Com um bonus de 50%%, o seu salario semanal eh de R$%0.2f", salario);
		
	}
	else{
		salario = (horasTrabalhadas*valorDaHora)*2; 
		printf("Com um bonus de 100%%, o seu salario semanal eh de R$%0.2f", salario);
		
	}
	return 0;
}

