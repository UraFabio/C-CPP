#include <stdio.h>

int main(){
	int n, freq_notas[101] = {0}, i, maior_nota = 0, maior_freq = 0;
	
	printf("Informe a quantidade de notas: ");
	scanf("%d", &n);
	
	int notas[n];
	
	printf("Informe as notas:\n");
	for(i = 0; i < n; i ++){
		printf(">> ");
		scanf("%d", &notas[i]);
		freq_notas[notas[i]] ++;
		if (freq_notas[notas[i]] > maior_freq){
			maior_freq = freq_notas[notas[i]];
			maior_nota = notas[i];
		}else if(freq_notas[notas[i]] == maior_freq){
			if (notas[i] > maior_nota){
				maior_nota = notas[i];
			}
		}

	}
	printf("\n\n%d\n",maior_nota);
	
	
	return 0;
}

