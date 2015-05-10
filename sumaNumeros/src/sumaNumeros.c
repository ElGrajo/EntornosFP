/*
 ============================================================================
 Name        : sumaNumeros.c
 Author      : Julian Gawron
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
 * La entrada consta de una serie de casos de prueba terminados con un n�mero negativo.
 * Cada caso de prueba es una simple l�nea con un n�mero no negativo no mayor que 109
 * del que habr� que sumar todos sus d�gitos.
 *
 * Salida
 * Para cada caso de prueba se mostrar� una l�nea en la que aparecer�n cada uno de los
 * d�gitos separados por el signo +, tras lo cual aparecer� el s�mbolo = y la suma de
 * todos los d�gitos.
 *
 * Ten en cuenta que antes y despu�s de cada s�mbolo (+ y =) hay un espacio.
 *
 * Entrada de ejemplo
 * 3433
 * 64323
 * 8
 * -1
 * Salida de ejemplo
 * 3 + 4 + 3 + 3 = 13
 * 6 + 4 + 3 + 2 + 3 = 18
 * 8 = 8
 *
 * */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char cadena[10];
	cadena = "123456";
	scanf("%10s", &cadena);
	printf("%s\n", cadena);
	/*printf("%d\n", ((int)cadena[0])-48);*/
	//Tama�o de array
	int n = sizeof(cadena) / sizeof(cadena[0]);
	//tama�o cadena
	n =  strlen(cadena);
	printf("%d", n);
	return EXIT_SUCCESS;
}

int SumaCifras(int numero){

	return numero;
}
