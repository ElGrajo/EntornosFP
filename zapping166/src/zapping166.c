/*
 ============================================================================
 Name        : zapping166.c
 Author      : Julian Gawron
 Version     :
 Copyright   : Your copyright notice
 Description : Zapping
 Mi tele tiene 99 canales correlativos que van desde el canal número 1 al 99.
 Hace algún tiempo se me estropeó el mando a distancia, y no me funcionan los
 números, por lo que no puedo acceder a mi canal favorito con ellos. Al menos,
 todavía funcionan los botones de pasar al siguiente canal y al anterior.
 No quiero que también estos botones se me rompan, de modo que siempre intento
 pulsarlos el menor número de veces.

 Sabiendo que al pasar al siguiente canal desde el 99 la tele me salta al 1, y
 viceversa, ¿cuántas veces tengo que avanzar o retroceder de canal para pasar de
 un canal A a un canal B de forma óptima?

 Entrada
 La entrada consta de una serie de casos de prueba consistentes en dos valores
 entre 1 y 99, el primero correspondiente al canal en el que me encuentro y el
 segundo al canal al que quiero llegar. La entrada termina cuando los dos números
 son 0.

 Salida
 Para cada caso de prueba se escribirá una línea en la que aparecerá el número
 de veces que tengo que saltar de canal para conseguir mi objetivo de forma óptima.

 Entrada de ejemplo
 2 5
 2 99
 5 63
 63 5
 0 0

 Salida de ejemplo
 3
 2
 41
 41
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int origen = 0;
	int final = 0;
	scanf("%d %d", &origen, &final);
	while(!(origen == 0 && final == 0)){
		//ordenar de mayor a menor
		if(origen > final){
			int aux = origen;
			origen = final;
			final = aux;
		}
		int distancia1 = final - origen;
		int distancia2 = 99 - final + origen;
		printf("%d\n", (distancia1<distancia2)?distancia1:distancia2);

     scanf("%d %d", &origen, &final);
	}
	return EXIT_SUCCESS;
}

