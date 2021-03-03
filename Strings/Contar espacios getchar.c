#include<stdio.h>

int main(){
	
	int c, i=0;
	
	while(EOF != (c = getchar())){
		i++;
	}
	
	printf("La cadena tiene %i espacios ocupados",i-1);

	return 0;
}
