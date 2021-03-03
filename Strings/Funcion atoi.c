/*		Funcion atoi():   convierte una string en un numero entero, por ejemplo: "1235"

		Es necesaria stdlib.h
*/

#include<stdio.h>
#include<string.h>

int main(){
	char *str1[20];
	char *str2[20];
	int valor1, valor2, suma = 0;
	
	printf("\n\tDigite una cadena de numeros enteros: ");
	gets(str1);
	printf("\n\tDigite otra cadena de numeros enteros: ");
	gets(str2);
	
	valor1 = atoi(str1);
	valor2 = atoi(str2);
	
	printf("\n\tNumero 1 entero: %i", valor1);
	printf("\n\tNumero 2 entero: %i", valor2);
	printf("\n\tLa suma es: %i", valor1 + valor2);
	return 0;
}
