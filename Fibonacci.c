
#include<stdio.h>

int main(){
	
	int n, c, i = 0, j = 1, k = 1;
	printf("\n\tDigite un numero: ");
	scanf("%i", &n);
	
	printf("\n\t1");
	for(c=1;c<=n;c++){
		k = i + j;
		i = j;
		j = k;
		printf("\t%i", k);
	}
	
	return 0;
}
