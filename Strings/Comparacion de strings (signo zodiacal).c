// Ingresar un numero e imprimir su raiz cuadrada

#include<stdio.h>
#include<string.h>

int main() { 

	char name[30], signo[20];
	
	puts("\n Introduzca su nombre: ");
	gets(name);
	
	puts("\n Introduzca su signo zodiacal: ");
	gets(signo);
	
	if (strcmp(name, "aries")==0){	
		printf("\n  %s es Aries.", name);
	}
	else {
		printf("\n  %s no es Aries.", name);
	}
	
	return 0;
}
