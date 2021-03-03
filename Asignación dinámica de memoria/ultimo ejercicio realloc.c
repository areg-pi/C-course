#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float *array, *array_converted;
	int i;
	
	array = malloc(5*sizeof(float));
	
	for(i=0; i<5; i++){
		printf("Digite el dato %i: ", i+1);
		scanf("%f", &array[i]);
	}
	printf("\n");
	for(i=0; i<5; i++){
		printf("%.1f  ", array[i]);
	}
	
	array_converted = realloc(array, 10*sizeof(float));
	
	printf("\n\n");	
	for(i=5; i<10; i++){
		printf("Digite el dato %i: ", i+1);
		scanf("%f", &array[i]);
	}
	printf("\n");
	for(i=0; i<10; i++){
		printf("%.1f  ", array[i]);
	}
	
	return 0;
}
