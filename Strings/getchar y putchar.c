
/*  getchar():  esta funcion se utiliza para leer caracter a caracter. La llamada a getchar() devuelve el caracter siguiente del
				flujo del entrada stdin. En caso de error o de encontrar el fin de archivo (End Of File, EOF), devuelve EOF (macro
				definida en stdio.h)
				
	putchar():  esta funcion se utuliza para escribir en la salida (stdout) caracter a caracter. El caracter que se escribe es el
				transmitido como argumento 
*/

#include<stdio.h>

int main(){
	
	int c;
	
	while(EOF != (c = getchar())){         //Mientras c no haya llegado a su final
		putchar(c);
	} 	
	
	return 0;
}
