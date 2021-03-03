
#include<stdio.h>

int main(){
	
	int opt;
	float T;
	printf("\n\tIntroduzca una temperatura en grados Celsius: ");
	scanf("%f", &T);
	printf("\n\tSeleccione una de las siguientes opciones:");
	printf("\n\t1. Convertir a grados Fahrenheit \n\t2. Convertir a grados Kelvin");
	scanf("%i", &opt);
	
	return 0;
}
