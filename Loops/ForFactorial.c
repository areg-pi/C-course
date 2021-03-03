
#include<stdio.h>

int main(){
	
	int n,i, fact = 1;
	printf("\n\tDigite un numero para calcular su factorial: ");
	scanf("%i", &n);
	
	for(i=n;i>=1;i--){
		fact *= i;
	}
	printf("\n\tEl factorial de %i es %i \n", n, fact);
	
	return 0;
}
