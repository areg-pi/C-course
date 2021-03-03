#include<stdio.h>

int main(){
	
	char cad[] = "ABC";
	
	printf("%c", cad[0]);
	printf("\n%c", cad[1]);
	printf("\n%c", cad[2]);
	printf("\n%c", cad[3]);
	
	printf("\n%c", *cad);
	printf("\n%c", *(cad+1));
	printf("\n%c", *(cad+2));
	printf("\n%c", *(cad+3));
	
	return 0;
}
