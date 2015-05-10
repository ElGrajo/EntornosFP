/*
 ============================================================================
 Name        : castillo243.c
 Author      : Julian Gawron
 Version     :
 Copyright   : Your copyright notice
 Description : En estos momentos, Jaime cuenta con 25.000 hombres de diversas casas
 afines a los Lannister y est� pensando cual ser�a la mejor distribuci�n en batallones
  de cara al ataque de los muros. Quiere repartirlos de manera que los batallones
  tengan el mismo n�mero de hombres y se ha dado cuenta de que hay m�ltiples maneras
  de realizar el reparto; por ejemplo con esos 25.000 hombres podr�a hacer 100 batallones
   de 250 hombres, 250 batallones de 100 hombres y otras configuraciones hasta un total
   de 24 formas distintas. Ahora le gustar�a poder saber para cada una de sus batallas
   pasadas y futuras, c�mo se podr�a repartir a sus hombres siguiendo el mismo
   procedimiento. �Podr�as ayudarle?

Entrada
La entrada consta de una serie de casos de prueba. Cada uno es una l�nea con un
n�mero positivo entre 1 y 500.000 que indica el n�mero de hombres de los que dispone
Jaime. La entrada termina con un caso de prueba sin soldados, que no deber� procesarse.

Salida
Para cada caso de prueba se mostrar� una l�nea en la que aparecer� el n�mero de
configuraciones posibles de batallones del mismo n�mero de hombres que puede formar
Jaime con los soldados de los que dispone.

 Entrada de ejemplo
 25000
 500
 1000
 0
 Salida de ejemplo
 24
 12
 16
============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
	int cuantos = 0;
	scanf("%d", &cuantos);
	while(cuantos>0){
		//calcular los divisores
		int divisores = 0;
		int i;
		int raiz = sqrt(cuantos);
		for (i = 1; i <= raiz; ++i) {
			if(cuantos % i == 0)
				divisores++;
		}

		divisores = divisores * 2; //son el doble
		if(raiz * raiz == cuantos)//si la raiz es exacta es un menos
			divisores--;

		//imprimir resultado
		printf("%d\n", divisores);
	scanf("%d", &cuantos);
	}
	return EXIT_SUCCESS;
}
