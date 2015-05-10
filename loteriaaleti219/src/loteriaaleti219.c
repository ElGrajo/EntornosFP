/*
 ============================================================================
 Name        : loteriaaleti219.c
 Author      : Julian Gawron
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int vueltas = 0;
	int lugares = 0;
	scanf("%d", &vueltas);
	while(vueltas>0){
		scanf("%d", &lugares);
		int pares = 0;
		int numero = 0;
		//int loteria[lugares];
		int i;
		for (i = 0; i < lugares; ++i) {
			scanf("%d", &numero);
			if(numero % 2 == 0)
				pares++;
		}
		printf("%d\n", pares);
	vueltas--;
	}
	return EXIT_SUCCESS;
}
