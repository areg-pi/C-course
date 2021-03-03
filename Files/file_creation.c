//Hacer un programa en C que encuentre un archivo de texto

#include <stdio.h>
#include <stdlib.h>

FILE *file;

int main(){
	
	char direccion[] = "C:\\Users\\gerar\\OneDrive\\Documentos\\C programming\\Curso\\HOLI.txt";
	
	file = fopen(direccion, "w");      // w = write ---- para crear archivo de texto
	
	if (file == NULL){
		printf("\n\tThe file could not be created. Please check the folder.\n");
	}
	else{
		printf("\n\tThe file was created in %s.\n", direccion);
	}
	return 0;
}
