#include<stdio.h>


struct name{
	char name[20];
	int age;
} personas[5];   //persona1, persona2, persona3, persona4, persona5

int main(){
	
	int i;
	
	for(i=0; i<5; i++){
		fflush(stdin);
		printf("\n\t%i. Digite el nombre de la persona: ", i+1);
		gets(personas[i].name);
		printf("\tDigite la edad: ", &personas[i].age);
		scanf("%i", &personas[i].age);
	}
	
	for(i=0; i<5; i++){
		printf("\n\n\t%i. Nombre: %s", i+1, personas[i].name);
		printf("\n\tEdad: %i", personas[i].age);
	}
	return 0;
}
