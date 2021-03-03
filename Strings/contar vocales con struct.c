#include<stdio.h>

int main(){
	
	int c, vocal=0, a=0, e=0, i=0, o=0, u=0;
	
	printf("Digite algo: ");
	
	while(EOF != (c = getchar())){
		switch(c){
			case 'a': a++; vocal++; break;
			case 'e': e++; vocal++; break;
			case 'i': i++; vocal++; break;
			case 'o': o++; vocal++; break;
			case 'u': u++; vocal++; break;
		}
	}
	
	printf("La cadena tiene %i vocales.", vocal);
	printf("\nLa vocal a aparece %i veces.", a);
	printf("\nLa vocal e aparece %i veces.", e);
	printf("\nLa vocal i aparece %i veces.", i);
	printf("\nLa vocal o aparece %i veces.", o);
	printf("\nLa vocal u aparece %i veces.", u);
	
	return 0;
}
