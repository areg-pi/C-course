//METODO BURBUJA: Es un algoritmo sencillo de ordenamiento. Revisa cada elemento de la lista y los acomoda de menor a mayor
//Es ineficiente para cantidades grandes de numeros

#include<stdio.h>

int main(){
	
	int array[5] = {3,2,1,5,4};
	int i, j, aux;
	
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if(array[j] > array[j+1]){
				aux = array[j];
				array[j] = array[j+1];
				array[j+1] = aux;
			}
		}
	}

	//Ascendente
	for(i=0; i<5; i++){
		printf("\t\n %i", array[i]);
	}
	
	printf("\n\n");

	//Descendente
	for(i=4; i>=0; i--){
		printf("\t\n %i", array[i]);
	}
	
	
	return 0;
}
