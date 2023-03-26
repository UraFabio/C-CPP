#include <stdio.h>

int josefo(int n){
	if (n == 1){
		return 1;
	}else{
		if (n%2 == 0){
			return 2*josefo(n/2)-1;
		}else{
			return 2*josefo(n/2)+1;
		}
	}
}

int main(){
	int n;
	
scanf("%d", &n);
printf("%d", josefo(n));

	return 0;
}

