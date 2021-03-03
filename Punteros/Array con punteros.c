#include<stdio.h>

int main(){
	
	int i, n[]={1,2,3,3,4,6,7,7,9,10};
	int *p_n;
	
	p_n = &n;   // p_n = n[0]   inicialmente se iguala a lo que hay en la posicion 0 de n
	
	for(i=0; i<10; i++){
		printf("\n\tDato %i: %i", i, *p_n);
		printf("\n\tPosicion: %p", p_n);
		printf("\n\n");
		p_n++;             //Se debe aumentar para que la posicion aumente y no quede en 0
	}
	
	
	return 0;
}
