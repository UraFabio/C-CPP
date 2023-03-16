#include <stdio.h>
#include <stdlib.h>

int main(){
	float etiqueta, valorFinal;
	int condicao;
	printf("Qual o preco de etiqueta?\n>>");
	scanf("%f", &etiqueta);
	printf("Escolha a condicao de pagamento:\n\n[1] A vista\n[2] A vista no cartao de credito\n[3] Em duas vezes\n[4] Em tres vezes\n\n>>");
	scanf("%d", &condicao);
	
	switch(condicao){
		case 1:
			valorFinal = etiqueta*0.9;
			printf("Pagamento a vista tem 10%% de desconto, valor final eh de: R$%0.2f\n", valorFinal);
			break;
		case 2:
			valorFinal = etiqueta*0.85;
			printf("Pagamento no cartao de credito a vista tem 15%% de desconto, valor final eh de: R$%0.2f\n", valorFinal);
			break;
		case 3:
			valorFinal = etiqueta;
			printf("Pagamento em duas vezes no cartao de credito nao tem desconto, valor final eh de: R$%0.2f\n", valorFinal);
			break;
		case 4:
			valorFinal = etiqueta*1.10;
			printf("Pagamento em tres vezes no cartao de credito tem 10%% de juros, valor final eh de: R$%0.2f\n", valorFinal);
			break;
		default:
			system("cls");
			system("color 4");
			printf("ERRO! opcao invalida, tente novamente.\n");
			break;	
	}
	 
	return 0;
}

