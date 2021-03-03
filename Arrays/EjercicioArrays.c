//Programa de Pares e Impares con arrays

#include<stdio.h>
#include<time.h>
void Pares(int array[100]);
void Impares(int array[100]);


int main(){
	
	int i, array[100];
	
	srand(time(NULL));
	
	for (i=0; i<100; i++){
		array[i] = 1 + rand()%(1000);
	}
	for(i=0; i<=10; i++){
		printf("\t%i \n", array[i]);	
	}
	printf("\n");
	
	Pares(array);
	printf("\n");
	Impares(array);
		
	return 0;
}

void Pares(int array[100]){
	int j, m = 0;
	int arrayPar[100];
	
	for(j=0; j<100; j++){
		if(array[j]%2 == 0){
			arrayPar[j] = array[j];
			printf("\t%i\n", arrayPar[j]);
			m++;
		}
	}
	printf("\nLos pares son %i \n", m);
}

void Impares(int array[100]){
	int j, n = 0;
	int arrayImpar[100];
	
	for(j=0; j<100; j++){
		if(array[j]%2 != 0){
			arrayImpar[j] = array[j];
			printf("\t%i\n", arrayImpar[j]);
			n++;
		}
	}
	printf("\nLos impares son %i \n", n);
}
