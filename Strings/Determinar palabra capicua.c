#include<stdio.h>
#include<string.h>

int main(){
	
	char palabra1[20], palabra2[20];
	
	printf("\n\tDigite una palabra: ");
	gets(palabra1);
	
	strcpy(palabra2, palabra1);
	
	strrev(palabra1);
	
	if(strcmp(palabra1, palabra2) == 0){
		printf("\n\tLa palabra es capicua.");
	}
	else{
		printf("\n\tLa palabra no es capicua.");
	}
	
	return 0;
}
