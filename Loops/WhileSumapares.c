
#include<stdio.h>

int main(){
	
	int cont, n, m, suma = 0;
	printf("\n\tDigite dos numeros: ");
	scanf("%i %i", &n, &m);
	
	cont = n;
	
	while(cont<=m){
		if(cont%2==0){
			suma += cont;
		}
		cont++;
	}
	printf("\t\nLa suma de numeros pares de n hasta m es: %i", suma);

	return 0;
}
