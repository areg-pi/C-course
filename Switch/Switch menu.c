
#include<stdio.h>
#include<math.h>

int main(){
	
	int option, num2, pot = 3;
	float num1, cubo;
	
	printf("\n\tMENU DE LOS NUMEROS \n");
	printf("\n 1. Calcular el cubo de un numero");
	printf("\n 2. Saber si un numero es par o impar");
	printf("\n 3. Salir");
	printf("\n\nElija la opcion que desee: ");
	scanf("%i", &option);
	
	switch(option){
		case 1:
			printf("\nIngrese un numero para calcular su cubo: ");
			scanf("%f", &num1);
			cubo = pow(num1, pot);
			printf("El cubo de %f es: %.2f", num1, cubo);
		break;
		case 2:
			printf("\nIngrese un numero para saber si es par o impar: ");
			scanf("%i", &num2);
			if(num2%2==0){
				printf("El numero es par.");
			}
			else{
				printf("El numero es impar.");
			}
		break;
		case 3:	break;
		default: printf("La opcion no es valida.");
	}
	return 0;
}
