
#include<stdio.h>
#include<string.h>

int main(){
	
	int length;
	char algo[30];
	
	printf("\n\tDigite algo: ");
	gets(algo);
	
	strrev(algo);
	length = strlen(algo);
	
	printf("\n\tPalabra invertida: %s \n\tNumero de caracteres: %i", algo, length);
	
	return 0;
}
