#include<stdio.h>
int Vocales(char *s);

int main(){
	
	char name[20];
	
	printf("\n\tDigite su nombre: ");
	gets(name);
	
	printf("La cantidad de vocales es %i", Vocales(name));
	
	return 0;
}

int Vocales(char *s){
	
	int cont = 0;
	
	while(*s){       //mientras que s no sea nulo, es decir, mientras no sea el final del string el bucle se seguira ejecutando
		switch(*s){        //lo que hace *s es apuntar a cada caracter de la string
			case 'a': 
			case 'e':
			case 'i':
			case 'o':
			case 'u': cont++;
		}
		s++;
	}
	
	return cont;
}
