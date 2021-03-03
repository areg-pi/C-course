
#include<stdio.h>
void Fahrenheit(float T);
void Kelvin(float T);

int main(){
	
	int opt;
	float T;
	do{
		printf("\n\tIntroduzca una temperatura en grados Celsius: ");
		scanf("%f", &T);
		printf("\n\tSeleccione una de las siguientes opciones:");
		printf("\n\t1. Convertir a grados Fahrenheit \n\t2. Convertir a grados Kelvin \n\t3. Salir");
		printf("\n\tOpcion: ");
		scanf("%i", &opt);
		
		if(opt==1){
			Fahrenheit(T);
		}
		else if(opt==2){
			Kelvin(T);
		}
		else if(opt!=1 && opt!=2 && opt!=3){
			printf("La opcion no es valida.");
		}
	} while(opt!=3);
	
	return 0;
}

void Fahrenheit(float T){
	
	float F;
	F = (9*T)/5 + 32;
	printf("\n\tEl equivalente son %.2f grados Fahrenheit\n", F);
	
}

void Kelvin(float T){
	
	float K;
	K = T + 273.15;
	printf("\n\tEl equivalente son %.2f grados Kelvin\n", K);
	
}
