
#include<stdio.h>

int main(){
	
	char nombre[30], sexo[10];
	int edad;
	
	printf("Digite su nombre: ");
	gets(nombre);
	
	printf("Digite su sexo: ");
	gets(sexo);
	
	printf("Digite su edad: ");
	scanf("%i", &edad);
	

	if ((edad>=18) && (strcmp(sexo, "Masculino")==0)){
		printf("El nombre es %s", nombre);
	}
	else{
		printf("La persona es de sexo femenino y menor de edad.");
	}
	
	return 0;
}
