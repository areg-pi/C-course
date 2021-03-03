/* Arrays o arreglos unidimensionales
		
		Arrays enteros 
		Arrays flotantes
		Arrays de caracter
		Arrays de string o palabras
*/

#include<stdio.h>
#include<conio.h>

int main(){
	
	int i;
	char a[] = {'a', 'e', 'i', 'o', 'u'};
	
	//Sólo los arrays de caracter llevan comillas simples y las string dobles
	
	for(i=0; i<5; i++){
		printf("%c", a[i]);	
	}
	
	getch();
	return 0;
}
