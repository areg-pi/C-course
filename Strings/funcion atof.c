/*		Funcion atof():   convierte una string en un numero flotante, por ejemplo: "125.34"

			Es necesaria stdlib.h
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char str1[20];
	char str2[20];
	float valor1, valor2;
	
	printf("\n\tDigite una cadena de numeros flotantes: ");
	gets(str1);
	printf("\n\tDigite otra cadena de numeros flotantes: ");
	gets(str2);
	
	valor1 = atof(str1);
	valor2 = atof(str2);
	
	printf("\n\tNumero 1 flotante: %.2f", valor1);
	printf("\n\tNumero 2 flotante: %.2f", valor2);
	printf("\n\tEl producto es: %.2f	", valor1*valor2);
	
	return 0;
}
