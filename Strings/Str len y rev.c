
#include<stdio.h>
#include<string.h>

int main(){
	
	char k[30];
	int i, length;
	
	printf("\n\tDigite algo: ");
	gets(k);
	
	length = strlen(k);
	printf("\n\tEl numero de caracteres es %i\n", length);
	printf("\t");
	
	strrev(k);
	printf("La cadena invertida es %s", k);
	
	return 0;
}
