#include<stdio.h>
#include<string.h>

struct datos{
	char nombre[20];
	char apellido[20];
}persona;

int main(){
	
	printf("\n\tDigite su nombre en mayusculas: ");
	gets(persona.nombre);
	printf("\n\tDigite su apellido en mayusculas: ");
	gets(persona.apellido);
	
	strlwr(persona.nombre + 3);    //Empieza en la posicion 3 del string
	strlwr(persona.apellido);
	
	printf("\n\tNombre: %s", persona.nombre);
	printf("\n\tApellido: %s", persona.apellido);
	
	return 0;
}
