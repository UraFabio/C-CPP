#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int n;
	srand(time(NULL));
	n = 1 + rand()%7;
	switch(n){
		case 1:
			printf("O dia eh domingo.");
			break;
		case 2:
			printf("O dia eh segunda.");
			break;
		case 3:
			printf("O dia eh terca.");
			break;
		case 4:
			printf("O dia eh quarta.");
			break;
		case 5:
			printf("O dia eh quinta.");
			break;
		case 6:
			printf("O dia eh sexta.");
			break;
		case 7:
			printf("O dia eh sabado.");
			break;
	}
	return 0;
}

