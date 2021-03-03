
#include<stdio.h>
#include<stdlib.h>       //para malloc()
#include<string.h>

int main(){
	
	char nombre[20], *p_nombre;
	int length;
	
	strcpy(nombre, "Gerardo");   //Gerardo \0   hay un espacio mas al final de una string con el que se da cuenta que ya no hay mas caracteres
	
	length = strlen(nombre);      //strlen no cuenta el ultimo espacio de una string
	
	p_nombre = malloc((length + 1) * sizeof(char));
	
	strcpy(p_nombre, nombre);
	
	printf("Nombre: %s", p_nombre);	
	
	return 0;
}
