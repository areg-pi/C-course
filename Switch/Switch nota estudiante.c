
#include<stdio.h>

int main() {
	
	char nota;
	
	printf("\n Introduzca la nota que obtuvo: ");
	scanf("%c", &nota);

	switch(nota) {
		case 'A': printf("\n  Excelente"); break;
		case 'B': printf("\n  Notable"); break;
		case 'C': printf("\n  Aprobado"); break;
		case 'D':
		case 'F': printf("\n  Reprobado"); break;
		default: printf("La nota no es valida");
	}
	
	return 0;
}
