/*
 ============================================================================
 Name        : fracciones223.c
 Author      : Julian Gawron
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/*(getchar() != EOF)
	 * The value of EOF is -1 because it has to be different from any return value
	 * from getchar that is an actual character. So getchar returns any character
	 * value as an unsigned char, converted to int, which will therefore be
	 *  non-negative.*/
	long origen;
	scanf("%ld", &origen);
	while (getchar() != EOF){

		long numerador;
		long denominador;
		int contador = 0, i;
		for (i = origen+1; i < (origen*2)+1; ++i) {
			numerador = i - origen;
			denominador = i * origen;
			if(denominador % numerador == 0)
				contador++;
		}
		printf("%d\n", contador);
	scanf("%ld", &origen);
	}
	return EXIT_SUCCESS;
}
