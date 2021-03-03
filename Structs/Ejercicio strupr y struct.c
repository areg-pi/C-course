#include<stdio.h>
#include<string.h>

struct datos{
	char nombre[20];
	char apellido[20];
	char ciudad[20];
}persona;

int main(){
	
	printf("\n\tDigite su nombre: ");
	gets(persona.nombre);
	printf("\n\tDigite su apellido: ");
	gets(persona.apellido);
	printf("\n\tDigite su ciudad: ");
	gets(persona.ciudad);
	
	strupr(persona.nombre);
	strupr(persona.apellido);
	strupr(persona.ciudad);
	
	printf("\n\tNombre: %s", persona.nombre);
	printf("\n\tApellido: %s", persona.apellido);
	printf("\n\tCiudad: %s", persona.ciudad);
	
	return 0;
}
