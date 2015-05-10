/*
 ============================================================================
 Name        : origenaje.c
 Author      : Julian Gawron
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a = 0; //primer cifra
	int b = 0; //cuanto multiplica
	int c = 0; //numero casillas

	scanf("%d %d %d", &a, &b, &c);
	while(a > 0 || b > 0 || c > 0){
		long long final = 0;
		long long actual = a;
		int i;
		for (i = 1; i <= c; ++i) {
			final = final + actual;
			actual = actual * b;
		}

	printf("%lld\n", final);
	scanf("%d %d %d", &a, &b, &c);
	}
	return EXIT_SUCCESS;
}
