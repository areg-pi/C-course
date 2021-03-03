// Hacer un programa que borre la pantalla al presionar 1

#include<stdio.h>
#include<stdlib.h>

int main() { 

	char tecla;              
	
	printf("\n Borrado de pantalla. ");
	printf("\n ---------------------------- \n ");
	printf("\n Digite el numero 1: ");
	scanf("%c", &tecla);
		
	if (tecla=='1') { 
		system("cls");                                                  //Clear screen
		printf("\n Ha funcionado el borrado de pantalla. ");
	}
	else {
		fflush(stdin);                                            // Limpia el buffer para seguir almacenando valores dentro del programa
		printf("\n No ha funcionado el borrado de pantalla. \n");
		printf("\n Digite el numero 1: ");
		scanf("%c", &tecla);
		if (tecla=='1') {
			system("cls");
			printf("\n Ha funcionado el borrado de pantalla. ");
		}
		else if (tecla!='1') {
			printf("\n You did nothing. ");
		}
	}
	return 0;
}
