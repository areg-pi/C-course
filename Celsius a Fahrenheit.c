// Convertir de Celsius a Fahrenheit

#include<stdio.h>

int main() { 

	float celsius, conversion=0;
	
	printf("Introduzca la temperatura en grados Celsius: ");
	scanf("%f", &celsius);

	conversion = 1.8*celsius + 32;
	
	printf("\n La temperatura en grados Fahrenheit es %.1f.", conversion);
		
	return 0;
}
