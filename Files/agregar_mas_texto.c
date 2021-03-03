//Agregar mas texto a un archivo .txt

#include<stdio.h>
#include<stdlib.h>

FILE *file, *file2, *file3;

int main(){
	
	int c;
	
	char direccion[] = "C:\\Users\\gerar\\OneDrive\\Documentos\\C programming\\Curso\\HI.txt";	
	
	printf("\n\t ---------- CREATE FILE ----------\n");
	file = fopen(direccion, "wt");
	
	if (file == NULL){
		printf("Error al tratar de crear el archivo.");
		return 1;
	}
	
	while((c = getchar()) != EOF){
		fputc(c, file);	
	}
	
	printf("\n\t ---------- READ FILE ----------\n");
	fflush(stdin);
	file2 = fopen(direccion, "rt");
	
	if (file2 == NULL){
		printf("Error al tratar de leer el archivo");
		return 1;
	}
	
	while((c = fgetc(file2)) != EOF){
		if (c == '\n'){
			printf("\n");
		}
		else{
			putchar(c);
		}
	}
	
	printf("\n\t ---------- ADD TEXT TO FILE ----------\n");
	file3 = fopen(direccion, "at");   // at = add text ---- agregar mas contenido del archivo .txt ------------------------------------
	
	if (file3 == NULL){
		printf("Error al agregar texto al archivo.");
		return 1;
	}
	
	while((c = getchar()) != EOF){
		fputc(c, file3);
	}
	
	fclose(file);
	fclose(file2);
	fclose(file3);
	
	return 0;
}
