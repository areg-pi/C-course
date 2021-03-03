#include<stdio.h>
#include<string.h>
#include<stdlib.h>    //para malloc()

int main(){
	
	char some[20], *p_some;
	int length;
	
	printf("Digite algo: ");
	gets(some);
	
	length = strlen(some);
	
	p_some = malloc((length + 1) * sizeof(char));
	
	strcpy(p_some, some);
	printf("Some: %s", p_some);
	
	
	return 0;
}
