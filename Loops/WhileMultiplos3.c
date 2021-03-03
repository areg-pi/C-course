
#include<stdio.h>

int main(){
	
	int n, cont = 0;
	
	printf("\n\t Digite un numero: ");
	scanf("%i", &n);
	
	while(cont<=n){
		if(cont%3==0){
			printf("\n %i", cont);
		}
		cont++;
	}
	return 0;
}
