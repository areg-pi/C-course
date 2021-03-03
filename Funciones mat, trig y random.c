
/*   Funciones matematicas   (depende del compilador si es necesaria la libreria math.h)
		ceil(x)             Redondea al proximo entero mas cercano
		fabs(x)				Devuelve el valor absoluto de x
		floor(x)			Redondea por defecto al entero mas proximo
		fmod(x, y)			Calcula el resto de la division de x/y
		pow(x, y)			Calcula x elevado a la potencia y
		sqrt(x)				Devuelve la raiz cuadrada de x

     Funciones trigonometricas    (es necesaria la libreria math.h)
		sin(x)				Calcula el seno del angulo x en radianes
		cos(x)				Calcula el coseno del angulo x en radianes
		tan(x)				Calcula la tangente del angulo x en radianes
		atan(x)				Calcula el arco tangente de x
		acos(x)				Calcula el arco coseno de x
		asin(x)				Calcula el arco seno de x

	 Funcion aleatoria   (es necesaria la libreria time.h)
		srand(time(NULL));
		variable = limite_inferior + rand() ((limite_superior + 1 ) - limite_inferior);
*/

#include<stdio.h>
#include<math.h>
#include<time.h>
void funcion_aleatoria();
 
int main(){
	funcion_aleatoria();
	return 0;
}

void funcion_aleatoria(){
	int num, i, li, ls;
	
	srand(time(NULL));
	
	printf("\n\tDigite el limite inferior: ");
	scanf("%i", &li);
	printf("\n\tDigite el limite superior: ");
	scanf("%i", &ls);
	
	for(i=1; i<=10; i++){
		num = li + rand() % ((ls + 1) - li);
		printf("\t%i \n", num);
	}
}
