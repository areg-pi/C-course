/* Utilizar la funcion fopen() para determinar si existe un archivo de texto (.txt) o no

				fopen(nombre de archivo, modo);
				
				
				nombre de archivo = cadena     ----   contiene el identificador externo del archivo
				modo = cadena                  ----   contiene el modo en que será tratado el archivo      
*/

#include<stdio.h>
#include<stdlib.h>     //para la funcion NULL

FILE *fd;   //FILE es un puntero de tipo archivo y fd ayudará a determinar si existe un archivo

int main(){
	
	char direccion [] = "C:\\Users\\gerar\\OneDrive\\Documentos\\C programming\\Curso\\hola.txt";
	
	fd = fopen(direccion, "r");       //r = read ---- leer archivo para saber si existe o no
	
	if (fd == NULL){                 //Si un puntero apuntaba a NULL o tenia valor NULL significa que hay error en el puntero o no existe
		printf("\n\tThe file doesn't exist.\n");
	}
	else{
		printf("\n\tThe file exists.\n");
		printf("\tDireccion: %s", direccion);
	}
	return 0;
}
