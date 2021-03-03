#include<stdio.h>

int main() { 

	int x, y, z;
	printf("\n Introduzca un numero: ");
	scanf("%i", &x);	
		
	for (y=1; y < x; y++) {
		
		for (z=1; z <= y; z++) {
			printf("*");
		}
		printf("\n");
	}

	for (y=1; y <= x; y++) {
		
		for (z=1; z <= y; z++) {
			printf(" * ");
		}
		printf("\n");
	}
	
	return 0;
}
