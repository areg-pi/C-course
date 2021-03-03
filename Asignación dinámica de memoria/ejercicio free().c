#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	int length;
	char name[20], *p_name;
	
	strcpy(name, "Gerardo");
	length = strlen(name);
	
	p_name = malloc((length + 1) * sizeof(char));
	strcpy(p_name, name);
	
	if(name == NULL){
		printf("\nError en la asignacion de memoria");
	}
	else{
		printf("\n %s", p_name);
		
	}
	
	free(p_name);
	printf("\n %s", p_name);
	
	return 0;
}
