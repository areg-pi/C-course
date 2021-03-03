//Busqueda secuencial: saber si un numero pertenece a una lista (esté la lista ordenada o no)

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int a[5] = {2,4,3,5,1};
	char band = 'F';
	int i, dato;
	
	dato = 2;
	
	//busqueda secuencial
	i = 0;
	while((band == 'F') && (i<5)){
		if(a[i] == dato){
			band = 'T';
			break;
		}
		i++;
	}
	
	if(band == 'F'){
		printf("El numero no existe");
	}
	else if(band == 'T'){
		printf("El numero existe en la posicion %i.", i);
	}
	
	return 0;
}
