
#include<stdio.h>
#include<string.h>

int main(){
	
	char algo[20];
	char algo2[20];
	
	printf("\n\tDigite algo: ");
	gets(algo);
	
	strcpy(algo2, algo);
	printf("\n\n\t %s", algo2);
	
	strcpy(algo2 + 10, "Buena broma");  //el copiado de "Buena broma" empezará a partir de la posicion 10 de la variable algo2
	printf("\n\n\t %s", algo2);
	
	return 0;
}
