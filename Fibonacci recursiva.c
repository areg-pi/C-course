
#include<stdio.h>
int fibonacci(int n);

int main(){
	
	int num, i;
	printf("\n\tDigite el numero de elementos: ");
	scanf("%i", &num);
	
	for(i=1;i<=num;i++){
		printf("\t  %i", fibonacci(i));
	}
	
	return 0;
}

/*
	0 1 1 2 3 5 8 13
	fibonacci(1) = 1
	fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)
*/

int fibonacci(int n){
	if(n==0 || n==1){
		return n;
	}
	else{
		return (fibonacci(n-1)+fibonacci(n-2));
	}	
}
