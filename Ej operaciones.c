// Ejercicios Operaciones Aritméticas

#include<stdio.h>

int main() { 

	int a, b, suma = 0, resta = 0, division = 0, multi = 0;
	
	printf("Introduzca dos numeros: ");
	scanf("%i %i", &a, &b);

	suma = a + b;
	resta = a - b;
	division = a / b;
	multi = a * b;
	
	printf("La suma es %i. \n", suma);
	printf("La resta es %i. \n", resta);
	printf("La division es %i. \n", division);
	printf("La multiplicacion es %i. \n", multi);
		
	return 0;
}
