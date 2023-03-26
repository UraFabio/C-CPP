#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int usuario, computador;
	
	printf("Vamos jogar jokenpo!");
	printf(" Escolha sua jogada:\n[1] Pedra\n[2] Papel\n[3] Tesoura\n>>");
	scanf("%d", &usuario);
	
	srand(time(NULL));
	computador = 1 + rand()%3;
	
	if (usuario < 1 || usuario > 3){
		printf("Escolha um numero entre 1 e 3. Tente novamente");
		
	}else{
		switch(usuario){
			case 1:
				if (computador == 1){
					printf("Voce = PEDRA\nComputador = PEDRA\n");
					printf("Empate!!\n");
				}else if (computador == 2){
					printf("Voce = PEDRA\nComputador = PAPEL\n");
					printf("Voce perdeu!\n");
				}else {
					printf("Voce = PEDRA\nComputador = TESOURA\n");
					printf("Voce ganhou!!\n");
				}
				break;
			case 2:
				if (computador == 1){
					printf("Voce = PAPEL\nComputador = PEDRA\n");
					printf("Voce ganhou!\n");
				}else if (computador == 2){
					printf("Voce = PAPEL\nComputador = PAPEL\n");
					printf("Empate!\n");
				}else {
					printf("Voce = PAPEL\nComputador = TESOURA\n");
					printf("Voce perdeu!\n");
				}
				break;
			case 3:
				if (computador == 1){
					printf("Voce = TESOURA\nComputador = PEDRA\n");
					printf("Voce perdeu!\n");
				}else if (computador == 2){
					printf("Voce = TESOURA\nComputador = PAPEL\n");
					printf("Voce ganhou!\n");
				}else {
					printf("Voce = TESOURA\nComputador = TESOURA\n");
					printf("Empate!\n");
				}
				break;
		}
	}
	return 0;
}

