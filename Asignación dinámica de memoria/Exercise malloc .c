#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TOPE 1000

int main(){
	
	int i, *array;	
	array = malloc(TOPE * sizeof(int));
	
	if(array == NULL){
		printf("\n\nError en la asignacion de memoria.");
		return -1;   //Intentar recuperar memoria
	} 
	else{
		srand(time(NULL));
		for(i=0; i<TOPE; i++){
			array[i] = 1 + rand() % ((TOPE + 1) -1);
			printf("\n %i. %i", i+1, array[i]);
		}
	}
	
	
	return 0;
}
