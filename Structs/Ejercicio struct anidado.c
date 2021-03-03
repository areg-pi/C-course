#include<stdio.h>

struct promedio{
	float nota1, nota2, nota3;
};

struct alumno{
	char nombre[20];
	char sexo[15];
	int edad;
	struct promedio notas;
} alumnos[50];

int main(){
	int i, n;
	
	printf("\n\tDigite el numero de alumnos: ");
	scanf("%i", &n);
	
	for(i=0; i<n; i++){
		fflush(stdin);
		printf("\n\t---- Alumno %i ----", i+1);
		printf("\n\tNombre: ");
		gets(alumnos[i].nombre);
		printf("\n\tSexo: ");
		gets(alumnos[i].sexo);
		printf("\n\tEdad: ");
		scanf("%i", &alumnos[i].edad);
		printf("\n\tNota 1: ");
		scanf("%f", &alumnos[i].notas.nota1);
		printf("\n\tNota 2: ");
		scanf("%f", &alumnos[i].notas.nota2);
		printf("\n\tNota 3: ");
		scanf("%f", &alumnos[i].notas.nota3);
	}
	
	int pmayor = 0, pmenor = 99999, pM, pm, prom;
	
	for(i=0; i<n; i++){
		prom = (alumnos[i].notas.nota1 + alumnos[i].notas.nota2 + alumnos[i].notas.nota3)/3;
		if(prom >= pmayor){
			pmayor = prom;
			pM = i;
		}
		if(prom <= pmenor){
			pmenor = prom;
			pm = i;
		}
	}
	
	printf("\n\n\t---- ALUMNO CON MEJOR PROMEDIO ----");
	printf("\nNombre: %s", alumnos[pM].nombre);
	printf("\n\tSexo: %s", alumnos[pM].sexo);
	printf("\n\tEdad: %i", alumnos[pM].edad);
	printf("\n\tPromedio: %i", pmayor);
	
	printf("\n\n\t---- ALUMNO CON PEOR PROMEDIO ----");
	printf("\nNombre: %s", alumnos[pm].nombre);
	printf("\n\tSexo: %s", alumnos[pm].sexo);
	printf("\n\tEdad: %i", alumnos[pm].edad);
	printf("\n\tPromedio: %i", pmenor);
	
	return 0;
}
