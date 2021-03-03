
//strcat(variable, "texto a añadir")     -----   añade texto a una string

#include<stdio.h>
#include<string.h>

int main(){
	
	char algo[20];
	
	printf("\n\tDigite algo: ");
	gets(algo);
	
	printf("\n\n\t %s", algo);
	
	strcat(algo, "Que tengas un buen dia");
	
	printf("\n\n\t %s", algo);
	
	return 0;
}
