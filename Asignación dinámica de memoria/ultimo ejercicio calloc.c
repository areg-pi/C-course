#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float *array;
	int i, n;
	
	printf("Digite el numero de elementos: ");
	scanf("%i", &n);
	printf("\n\n");
	
	array = calloc(n, sizeof(float));

	if(array == NULL){
		printf("Memoria insuficiente\n");
		return -1;
	}
	
	for(i=0; i<n; i++){
		fflush(stdin);
		printf("\nDigite el dato %i: ", i+1);
		scanf("%f", &array[i]);
	}
		
	for(i=0; i<n; i++){
		printf("%.1f  ", array[i]);
	}
	
	free(array);

	return 0;
}
