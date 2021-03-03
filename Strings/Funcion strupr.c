
#include<stdio.h>
#include<string.h>

int main(){
	
	char palabra1 [] = "hola";
	char palabra2 [] = "hola";
	
	strupr(palabra1);      //stupr()   convierte una string de minuscula a mayuscula
	strupr(palabra2);
	
	printf("\n\t%s", palabra1);
	printf("\n\t%s", palabra2);
	
	if(strcmp(palabra1, palabra2) == 0){
		printf("\n\n\tLas cadenas son iguales");
	}
	else{
		printf("\n\n\tLas cadenas son diferentes");
	}
	
	return 0;
}
