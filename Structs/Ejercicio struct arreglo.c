#include<stdio.h>

struct atleta{
	char name[20];
	char country[20];
	int medals;
}atleta[50];

int main(){
	int i, n;
	int menor = 9999999, mayor = 0;
	int pmayor, pmenor;
	printf("\n\tDigite el numero de atletas: ");
	scanf("%i", &n);
		
	for(i=0; i<n; i++){
		fflush(stdin);
		printf("\n\tEscriba el nombre del atleta %i: ", i+1);
		gets(atleta[i].name);
		printf("\n\tEscriba su pais: ");
		gets(atleta[i].country);
		printf("\n\tEscriba la cantidad de medallas ganadas: ");
		scanf("%i", &atleta[i].medals);
		printf("\n");
	}
	
	for(i=0; i<n; i++){
		if(atleta[i].medals > mayor){
			mayor = atleta[i].medals;
			pmayor = i;
		}
		
		if(atleta[i].medals < menor){
			menor = atleta[i].medals;
			pmenor = i;
		}
	}
	
	printf("\n\t----ATLETA CON MAS MEDALLAS GANADAS----\n");
	printf("\n\tName: %s", atleta[pmayor].name);
	printf("\n\tCountry: %s", atleta[pmayor].country);
	printf("\n\tMedals: %i \n", atleta[pmayor].medals);
	
	printf("\n\t----ATLETA CON MENOS MEDALLAS GANADAS----\n");
	printf("\n\tName: %s", atleta[pmenor].name);
	printf("\n\tCountry: %s", atleta[pmenor].country);
	printf("\n\tMedals: %i \n", atleta[pmenor].medals);
	
	return 0;
}
