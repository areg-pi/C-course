//Tomar el archivo pasado y leerlo con la funcion fgetc()

						//  fgetc(puntero_archivo)

#include<stdio.h>
#include<stdlib.h>

FILE *file;

int main(){
	
	int c;
	char direccion[] = "C:\\Users\\gerar\\OneDrive\\Documentos\\C programming\\Curso\\hi.txt";	
	
	file = fopen(direccion, "rt");   // rt = read text ---- leer contenido del archivo .txt
	
	if (file == NULL){
		printf("Error al leer archivo");
		return 1;
	}
	
	while ((c = fgetc(file)) != EOF){
		if (c == '\n'){
			printf("\n");
		}
		else{
			putchar(c);
		}
	}
	
	fclose(file);
	
	return 0;
}
