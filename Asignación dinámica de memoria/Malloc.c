//Uso de malloc()

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	char *a;
	
	a = malloc(sizeof(char));    //sizeof(int)   tamaño de una variable entera

	*a = 'a';
	printf("%c", *a);
	
	
	/*int x;
	x = sizeof(int);				//Para saber cuantos bytes ocupa unavariable de tipo int
	printf("%i", x);  */
	
	
	return 0;
}
