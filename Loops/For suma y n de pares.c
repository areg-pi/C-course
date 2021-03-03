
#include<stdio.h>

int main(){
	
	int n, i, cont = 0, suma = 0;
	printf("\n\tDigite un numero: ");
	scanf("%i", &n);
	
	for(i=0;i<=n;i+=2){
		if(i%2==0){
			cont++;
			suma += i;
		}
	}
	
	printf("\n\tLa suma de pares de 0 hasta %i es: %i.\n", n, suma);
	printf("\tLa cantidad de pares es de %i.", cont);
	
	return 0;
}
