/* Ingresar por teclado el nombre, la edad y el sexo de cualquier persona e imprima,
solo si la persona es de sexo masculino y mayor de edad, el nombre de la persona. */

#include<stdio.h>
#include<string.h>

int main() { 

	char name[30], gender[20];
	int age;
	
	printf(" Introduzca su nombre: ");
	gets(name);
	
	printf(" Introduzca su genero [Masculino/Femenino]: ");
	gets(gender);
	
	printf(" Introduzca su edad: ");
	scanf("%i", &age);
	
	if ((strcmp(gender, "masculino")==1) && age > 18){	
		printf("\n  %s es mayor de edad y de sexo masculino.", name);
	}
	else {
		printf("No eres mayor de edad y/o de sexo masculino.");
	}
	
	return 0;
}
