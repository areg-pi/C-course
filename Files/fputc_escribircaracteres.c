//Usar funcion fputc() para introducir caracteres en un archivo de texto .txt

			//fputc(c, puntero_archivo)

#include<stdio.h>
#include<stdlib.h>

FILE *file;

int main(){
	
	int c;
	char direccion[] = "C:\\Users\\gerar\\OneDrive\\Documentos\\C programming\\Curso\\hi.txt";
	
	file = fopen(direccion, "wt"); // wt == writetext ---- escribir texto
	
	if (file == NULL){
		printf("\n\tThe file could not be created.\n");
		return 1;
	}
	
	while((c = getchar()) != EOF){
		fputc(c, file);
	}
	
	return 0;
}
