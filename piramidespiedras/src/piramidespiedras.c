/*
 ============================================================================
 Name        : piramidespiedras.c
 Author      : Julian Gawron
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int numeroIngresado, numeroLado;
	scanf("%d", &numeroIngresado);

	while(numeroIngresado != 0){
		numeroLado = 1;
		int resultado = 0;
		while( resultado < numeroIngresado){
			printf("La cosa va así:%d %d %d", numeroLado, numeroIngresado, resultado);
			resultado = resultado + numeroLado;
			numeroLado++;
		}
		int diferencia = resultado - numeroIngresado;

		printf("%d %d\n", numeroLado, diferencia);
		scanf("%d", &numeroIngresado);
	}
	return EXIT_SUCCESS;
}
