//ORDENAMIENTO POR SELECCIÓN: Busca el número menor de la lsta y lo intercambie con el primer elemento. Busca el segundo menor
// y lo intercambia con el segundo elemento y así sucesivamente

#include<stdio.h>
#include<conio.h>

int main(){
	int a[5] = {3,4,1,5,2};
	int i,j,aux,min;

	for(i=0;i<5;i++){
		min = i;
		for(j=i+1;j<5;j++){
			if(a[j] < a[min]){
				min = j;
			}
		}
		aux = a[i];
		a[i] = a[min];
		a[min] = aux;
	}

	printf("\nAscendente\n");

	for(i=0;i<5;i++){
		printf("%i ", a[i]);
	}

	printf("\n\nDescendente\n");

	for(i=4;i>=0;i--){
		printf("%i ", a[i]);
	}
	return 0;
} 
