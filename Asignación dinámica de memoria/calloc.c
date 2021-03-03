/*  Funcion calloc()             hace lo mismo que malloc()

		puntero = calloc(numero de elementos, tamaño de cada elemento)
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int *p, i;
	
	p = calloc(5, sizeof(int));    //array de 5 elementos de tipo entero. Sería un elemento si fuera una variable normal
	
	//Nota: primero se debe reservar memoria antes de pedir o asignar cualquier dato
	
	for(i=0; i<5; i++){
		printf("Digite el dato %i: ", i+1);
		scanf("%i", &p[i]);
	}
	printf("\n\n");
	for(i=0; i<5; i++){
		printf("%i  ", p[i]);
	}

	return 0;
}
		

