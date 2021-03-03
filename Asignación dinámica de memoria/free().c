#include<stdio.h>
#include<stdlib.h>

//free(variable tipo puntero)


int main(){
	int *p1;

	p1 = malloc(sizeof(int));
	
	if(p1 == NULL){
		printf("Memoria llena");
	}
	else{
		printf("Hay espacio");
		*p1 = 15;
		printf("\n %i", *p1);
	}
	
	free(p1);              //liberar espacio que apunta p1
	printf("\n%", *p1);

	return 0;
}
