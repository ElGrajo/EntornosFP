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
 * La entrada consta de una serie de casos de prueba terminados con un número negativo.
 * Cada caso de prueba es una simple línea con un número no negativo no mayor que 109
 * del que habrá que sumar todos sus dígitos.
 *
 * Salida
 * Para cada caso de prueba se mostrará una línea en la que aparecerán cada uno de los
 * dígitos separados por el signo +, tras lo cual aparecerá el símbolo = y la suma de
 * todos los dígitos.
 *
 * Ten en cuenta que antes y después de cada símbolo (+ y =) hay un espacio.
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
	//Tamaño de array
	int n = sizeof(cadena) / sizeof(cadena[0]);
	//tamaño cadena
	n =  strlen(cadena);
	printf("%d", n);
	return EXIT_SUCCESS;
}

int SumaCifras(int numero){

	return numero;
}
