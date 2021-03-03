
#include<stdio.h>

int main(){
	
	int numero = 50;
	int *p_numero;
	
	p_numero = &numero;  //&numero = posicion de memoria de la variable "numero"
	
	printf("\n\tValor de la variable:\n");
	printf("\n\tDato: %i", numero);
	printf("\n\tDato: %i", *p_numero);         //Dato (con asterisco)
	
	printf("\n\n\tPosicion de memoria: \n");
	printf("Posicion: %p", &numero);
	printf("\nPosicion: %p", p_numero);       //Posicion (sin asterisco)
	
	
	return 0;
}
