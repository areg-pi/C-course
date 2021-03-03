//Intercambiar string en dos arrays

#include<stdio.h>
#include<string.h>
#define tam 20

int main(){
	
	char nombre1[tam], nombre2[tam], nombre3[tam];
	
	printf("\n\tDigite un nombre: ");
	gets(nombre1);
	printf("\n\tDigite otro nombre: ");
	gets(nombre2);
	
	strcpy(nombre3, nombre2);
	strcpy(nombre2, nombre1);
	strcpy(nombre1, nombre3);

	
	printf("\n\tEl primer nombre es %s", nombre2);
	printf("\n\tEl segundo nombre es %s", nombre1);
	
	return 0;
}
