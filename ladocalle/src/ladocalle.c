/*
 ============================================================================
 Name        : ladocalle.c
 Author      : Julian Gawron
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int casas = 0;
	scanf("%d", &casas);
	while(casas != 0){
		if(casas % 2 == 1)
			printf("IZQUIERDA\n");
		else
			printf("DERECHA\n");
	scanf("%d", &casas);
	}
	return EXIT_SUCCESS;
}
