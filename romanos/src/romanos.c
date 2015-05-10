/*
 ============================================================================
 Name        : romanos.c
 Author      : Julian Gawron
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	setbuf(stdout, NULL);
	int dato = 0, totalEscudos = 0, parcialSoldados = 0;
	float restoParcial = 0;
	scanf("%d", &dato);
	while(dato != 0){
		totalEscudos = 0;
		while(dato > 3){
			restoParcial = sqrt(dato);
			parcialSoldados = (int)restoParcial;
			dato = dato - (parcialSoldados * parcialSoldados);
			totalEscudos += (parcialSoldados * 4) + (parcialSoldados * parcialSoldados);
		}
		if(dato > 0){
		totalEscudos += (dato * 4 ) + dato;
		}
		printf("%d\n", totalEscudos);
		scanf("%d", &dato);
	}
	return 0;
}
