//Busqueda binaria o dicotomica: saber si un numero pertenece a una lista (con la condición de que la lista esté ordenada)

#include<stdio.h>
#include<stdlib.h>

int main(){
	int a[5] = {1,2,3,4,5};
	int inf, sup, mitad, dato;
	char band = 'F';

	dato = 3;
	
	//Busqueda binaria
	inf = 0;            //primera posicion
	sup = 5;            //numero maximo de elementos
	
	while(inf<=sup){
		mitad = (inf + sup)/2;
		
		if(a[mitad] == dato){
			band = 'T';
			break;    //Para finalizar el bucle while
		}
		if(a[mitad] > dato){
			sup = mitad;
			mitad = (inf + sup)/2;
		}
		if(a[mitad] < dato){
			inf = mitad;
			mitad = (inf + sup)/2;
		}
	}
	
	if(band == 'F'){
		printf("El numero no existe");
	}
	
	else if(band == 'T'){
		printf("El numero existe en la posicion %i", mitad);
	}
	
	return 0;	
}


