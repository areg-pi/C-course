//Abrir 2 archivos de texto y cerrarlos con fclose

#include <stdio.h>
#include <stdlib.h>

FILE *file1, *file2;

int main(){
	
	char direccion1[] = "C:\\Users\\gerar\\OneDrive\\Documentos\\C programming\\Curso\\hifive1.txt";
	char direccion2[] = "C:\\Users\\gerar\\OneDrive\\Documentos\\C programming\\Curso\\hifive2.txt";
	
	file1 = fopen(direccion1, "a+");    	
	file2 = fopen(direccion2, "a+");  
	
	if (file1 == NULL || file2 == NULL ){
		printf("\n\tThe files could not be created. Please check the folder.\n");
	}
	else{
		printf("\n\tThe files were checked.\n");
	}
	
	//Cerrar archivos con fclose
	fclose(file1);
	fclose(file2);
	
	return 0;
}
