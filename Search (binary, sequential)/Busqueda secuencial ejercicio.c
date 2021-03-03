
#include<stdio.h>

int main(){
	
	int i, elementos, dato;
	char band = 'F';
	
	printf("\n\tDigite el numero de elementos del array: ");
	scanf("%i", &elementos);
	
	int a[elementos];
	
	for(i=0; i<elementos; i++){
		printf("\t\nDigite el elemento de la posicion %i: ", i);
		scanf("%i", &a[i]);
	}
	
	printf("\n\tDigite el numero que desea buscar: ");
	scanf("%i", &dato);
	
	i = 0;
	while((band == 'F') && (i<elementos)){
		if(a[i] == dato){
			band = 'T';
		}
		i++;
	}
	
	if(band == 'F'){
		printf("El numero no existe");
	}
	else if(band == 'T'){
		printf("El numero existe en la posicion %i.", i-1);
	}	
	return 0;
}
