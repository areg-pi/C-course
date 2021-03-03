
#include<stdio.h>
/*
int main(){
	
	char letra;
	char *p_letra = &letra;       //posicion de letra
	
	for(letra = 'A'; letra <= 'Z'; letra++){
		printf("  %c", *p_letra);
	}
	
	return 0;
}
*/

int main(){
	
	int n, i, j = 0;
	int *p_n = &n;
	
	printf("\n\tDigite un numero: ");
	scanf("%i", &n);
	
	for(i=1; i<=n; i++){
		if(n%i==0){
			j++;
		}
	}
	
	if(j>2){
		printf("\n\tEl numero %i de la posicion de memoria %p no es primo.", *p_n, p_n);
	}
	else if(j==2){
		printf("\n\tEl numero %i de la posicion de memoria %p es primo.", *p_n, p_n);
	}
	
	
	return 0;
}

