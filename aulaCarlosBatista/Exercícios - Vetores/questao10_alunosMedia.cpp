#include <stdio.h>
#define MAX 50
int main(){
	char alunos[MAX][20];
	float notas[MAX];
	int i;
	
	printf("Digite o nome e media do aluno respectivamente:\n");
	for(i = 0; i < MAX; i ++){
		printf("Nome do aluno: ");
		scanf("%s", alunos[i]);
		printf("Nota do(a) %s: ", alunos[i]);
		scanf("%f", &notas[i]);
		printf("\n");
	}
	printf("\n");
	printf("Alunos aprovados:\n");
	
	for(i = 0; i < MAX; i ++){
		if(notas[i] >= 7){
			printf("%s com media %.1f.\n", alunos[i], notas[i]);
		}	
	}

	return 0;
}

