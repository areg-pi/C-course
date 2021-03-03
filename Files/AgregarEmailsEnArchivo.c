//Agregar emails a un archivo ya existente
			
			//   fprintf(puntero, informacion)
			//   fwrite(dato a guardar, tamanio, longitud, puntero)
			
#include<stdio.h>
#include<stdlib.h>

FILE *file;

struct datos_personales{
	char name[20];
	char last_name[20];
	char email[20];
}datos;

int main(){
	
	char direccion [] = "C:\\Users\\gerar\\OneDrive\\Documentos\\C programming\\Curso\\emails.txt";
	char ans;
	
	file = fopen(direccion, "at");
	
	if (file == NULL){
		printf("Error al crear archivo.");
		return 1;
	}
	
	printf("\n\t----- Agenda de emails -----\n");
	
	do{
		fflush(stdin);
		printf("\n\tDigite su nombre: ");
		gets(datos.name);
		printf("\n\tDigite su apellido: ");
		gets(datos.last_name);
		printf("\n\tDigite su email: ");
		gets(datos.email);
		
		fprintf(file, "\nNombre: ");
		fwrite(datos.name, 1, strlen(datos.name), file);
		fprintf(file, "\nApellido: ");
		fwrite(datos.last_name, 1, strlen(datos.last_name), file);
		fprintf(file, "\nEmail: ");
		fwrite(datos.email, 1, strlen(datos.email), file);
		fprintf(file, "\n");
		
		printf("\nEscriba (S)/(N) para agregar mas contactos o finalizar: ");
		scanf("%c", &ans);
	}while(ans == 'S');
	
	printf("\n\t----- Proceso finalizado -----");
	fclose(file);
	
	return 0;
}
