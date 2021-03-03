
#include<stdio.h>

int main(){
	
	int cont, n, multi = 1, sum = 0;
	
	printf("\n\tDigite un numero: "); 
	scanf("%i", &n);
	cont = 1;
	
	if(n>10){
		while(cont<=n){
			multi = multi * cont;
			cont++;
		}
		printf("\n\tLa multiplicacion es: %i", multi);
	} 
	else{
		while(cont<=n){
			sum = sum + cont;
			cont++;
		}
		printf("\n\tLa suma es: %i", sum);
	}
	return 0;
}
