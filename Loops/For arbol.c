
#include<stdio.h>

int main(){
	
	int n, i, j;
	printf("\n\t Digite un numero: ");
	scanf("%i", &n);
	printf("\n");
	
	for(i=1; i<=n; i++){
		printf("\t");
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
