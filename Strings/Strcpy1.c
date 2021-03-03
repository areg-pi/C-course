//Copiar string de un array a otro

#include<stdio.h>
#define tam 20

int main(){
	
	char nombre1[tam], nombre2[tam];
	
	printf("Digite su nombre: ");
	gets(nombre1);  //nombre1 = Gerardo
	
	//nombre2 = nombre1
	strcpy(nombre2, nombre1);
	
	printf("El nombre es %s", nombre2);
	
	return 0;
}
