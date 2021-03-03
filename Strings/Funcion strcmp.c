#include<stdio.h>
#include<string.h>

int main(){
	
	char name1[20], name2[20];
	
	printf("\n\tDigite dos nombres: ");
	gets(name1); gets(name2);
	
	if(strcmp(name1, name2) == 0){
		printf("\n\tLos nombres son iguales.");
	}
	else{
		printf("Los nombres son distintos.");
	}
	
	return 0;
}
