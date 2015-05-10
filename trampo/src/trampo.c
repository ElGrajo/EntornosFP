/*
 ============================================================================
 Name        : trampo.c
 Author      : Julian Gawron
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	double notas[7];
	/*scanf("%d %d %d %d %d %d %d", &notas[0],
			&notas[1], &notas[2], &notas[3],
			&notas[4], &notas[5], &notas[6]);
    */
    notas[0] = 4.5;
    notas[1] = 5.6;
    notas[2] = 5.4;
    notas[3] = 6.9;
    notas[4] = 6.8;
    notas[5] = 4.5;
    notas[6] = 4.5;

 	int i;
 	int var;
 	double aux;
 	double total;
	for (i = 0; i < 7; ++i) {
		printf("%.2f  ", notas[i]);
	}
	//Ordenacion
	for (var = 1; var < 7; ++var) {
	 for (i = 0; i < 6; ++i) {

		if(notas[i] > notas[i + 1]){
			aux = notas[i + 1];
			notas[i + 1] = notas[i];
			notas[i] = aux;
		}
	   }
	}
	printf("\n");
	for (i = 0; i < 7; ++i) {
		printf("%.2f  ", notas[i]);
	}
	total = (notas[2] + notas[3] + notas[4])*2;
    printf("nota final: %.f", total);

	return 0;
}
