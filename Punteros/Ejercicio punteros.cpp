#include<stdio.h>

int main(){
	
	int n, *p_n = &n;
	
	printf("\n\tDigite un numero: ");
	scanf("%i", &n);
	
	if(n%2 == 0){
		printf("\n\tEl numero %i de la posicion de memoria %p es par.", *p_n, p_n);
	}
	else if(*p_n%2 != 0){
		printf("\n\tEl numero %i de la posicion de memoria %p es impar.", *p_n, p_n);
	}
	
	return 0;
}
