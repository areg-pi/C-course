#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	char *algo, palabra[50];
	
	printf("Digte una palabra: ");
	gets(palabra);
	
	algo = calloc(strlen(palabra) + 1, sizeof(char));   //El +1 asigna el final de la cadena que hay en toda string, ejemplo: palabra/0
	
	strcpy(algo, palabra);
	
	printf("\n\n%s", algo);
	
	free(algo);         //Liberar espacio de la variable "algo"

	return 0;
}
