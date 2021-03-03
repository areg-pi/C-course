
#include<stdio.h>

//Prototipos
int sumar(int a, int b);

int main(){	
	
	int a, b;
	printf("Digite dos numeros para sumar: ");
	scanf("%i %i", &a, &b);
	
	printf("La suma es %i.", sumar(a,b));
	
	return 0;
}

int sumar(int a, int b){
	
	int suma = 0;
	suma = a + b;
	
	return suma;
}
