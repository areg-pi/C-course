//Directivas del preprocesador y variables

#include<stdio.h>       //librería

#define PI 3.141592     //macro

int y = 5;    //Variable global

int main() {          //función principal
	
	int x = 10;         //Variable local
	float suma;
	
	suma = PI + x;
	
	printf("La suma total es: %f", suma);
	
	return 0;
}
