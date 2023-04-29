#include <stdio.h>

int main(){
	char semana[7][5] = {"DOM","SEG","TER","QUA","QUI","SEX","SAB"};
	int temperatura[7];
	
	printf("digite a temperatura da semana, começando pelo domingo: ");
	for (int i = 0; i < 7; i ++){
		printf(">> ");
		scanf("%d", &temperatura[i]);
	}
	for (int i = 0; i < 7; i ++){
		printf("\n%s: ",semana[i]);
		for(int a = temperatura[i]; a > 0; a --){
			printf("#");
		}
	}

	return 0;
}

