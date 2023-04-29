#include <stdio.h>

int main() {
    int limite, n1 = 1, n2 = 1, n3;
    
    printf("Digite com quantos termos voce deseja criar a sequencia de fibonacci?: ");
    scanf("%d", &limite);
    
    for(int i = 0; i < limite; i ++){
    	printf("%d", n1);
    	if(i != (limite - 1)){
    		printf(", ");
		}
    	n3 = n1 + n2;
    	n1 = n2;
    	n2 = n3;
	}
    
    return 0;
}

