
#include<stdio.h>
#include<conio.h>
void copiandoArrays(int array1[5], int array2[5]);

int main(){
	
	int array1[5] = {1,2,3,4,5};
	int array2[5];
	printf("\n\tCopiando arrays\n");
	
	copiandoArrays(array1, array2);
	return 0;
}

void copiandoArrays(int array1[5], int array2[5]){
	int i;	
	
	for(i=0;i<5;i++){
		array2[i] = array1[i];
	}
	
	for(i=0; i<5; i++){
		printf("%i\n", array2[i]);
	}
}
