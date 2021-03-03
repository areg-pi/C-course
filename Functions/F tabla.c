#include<stdio.h>
void tabla(float n);

int main(){
	float n;
	
	do{
		printf("\n\n\tDigite un numero: ");
		scanf("%f", &n);
		tabla(n);
	} while(n>0 && n<=20);
	return 0;
}

void tabla(float n){
	int i;
	for(i=1;i<=20;i++){
		printf("\n\t%.2f x %i = %.2f", n, i, n*i);
	}
}
