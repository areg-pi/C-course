#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	char *string, *string_convertido;
	
	string = malloc(10*sizeof(char));
	
	strcpy(string, "Gerardo");
	printf("%s", string);
	
	string_convertido = realloc(string, 30*sizeof(char));
	strcat(string_convertido, " Marvel Avengers");           //strcat añade strings dentro de lo que ya teniamos
	
	printf("\n%s", string_convertido);
	
	return 0;
}
