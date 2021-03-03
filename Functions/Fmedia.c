
#include<stdio.h>

//Prototipos
void media(float a, float b);

int main(){	
	
	float a, b;
	printf("Digite dos numeros: ");
	scanf("%f %f", &a, &b);
	
	media(a, b);
	
	return 0;
}

void media(float a, float b){
	
	float prom = 0;
	prom = (a + b)/2;
	printf("El promedio es %.2f", prom);
}

