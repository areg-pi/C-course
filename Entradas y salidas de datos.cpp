// Entradas y salidas de datos

#include<stdio.h>
#include<math.h>

int main() {

	int counter = 0;
	int i;
	TRISB = 0b00000000;
	PORTB = 0b00000000;               // Se inicia el PORTB en cero
	
	for(counter = 0; counter <= 7; counter++){
	      i = pow(2,counter)                      // Expresion para la secuencia
	      PORTB += i;                // La secuencia en decimal debe ser 1, 2, 4, 8, 16, 32, 64, 128
	      delay_ms(100);
	}
}
