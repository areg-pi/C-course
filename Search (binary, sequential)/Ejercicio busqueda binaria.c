
#include<stdio.h>

int main(){
	
	int a[10] = {2,57,3,45,46,1,7,9,21,17};
	int i, j, min, aux;
	
	for(i=0;i<10;i++){
		min = i;
		for(j=i+1;j<10;j++){
			if(a[j] < a[min]){
				min = j;
			}
		}
		aux = a[i];
		a[i] = a[min];
		a[min] = aux;
	}
	
	printf("\n");
	for(i=0;i<10;i++){
		printf("  %i ", a[i]);
	}
	printf("\n");
	
	
	//Busqueda binaria
	
	int dato, inf, sup, mitad;
	char band = 'F';
	
	printf("\n\tDigite un numero a buscar: ");
	scanf("%i", &dato);
	
	inf = 0;            //primera posicion
	sup = 10;            //numero maximo de elementos
	
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
		printf("\n\t The number does not exists");
	}
	
	else if(band == 'T'){
		printf("\n\tThe number exists in position %i", mitad);
	}
	
	return 0;
}
