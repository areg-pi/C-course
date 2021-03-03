//ORDENAMIENTO POR INSERCIÓN: Recorre cada elemento y lo compara con el de su izquierda para decidir si los intercambia o no

#include<stdio.h>

int main(){
	
	char a[5] = {'e', 'o', 'a', 'u', 'i'};
	int i, pos, aux;
	
	for(i=0; i<5; i++){
		pos = i;
		aux = a[i];
		while ((pos > 0) && (aux < a[pos - 1])){
			a[pos] = a[pos -1];
			pos--;
		}
		a[pos] = aux;
	}

	//Ascendente
	for(i=0; i<5; i++){
		printf("\t\n %c", a[i]);
	}
	
	printf("\n\n");

	//Descendente
	for(i=4; i>=0; i--){
		printf("\t\n %c", a[i]);
	}
	
	
	return 0;
}
