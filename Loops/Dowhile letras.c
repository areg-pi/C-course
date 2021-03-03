
#include<stdio.h>

int main(){
	
	char letra = 'a';  //61h   62h   63h
	
	do{
		printf("\t%c\n", letra);
		letra++;
	} while(letra <= 'z');
	
	return 0;
}
