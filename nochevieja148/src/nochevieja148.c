/*
 ============================================================================
 Name        : nochevieja148.c
 Author      : Julian Gawron
 Version     :
 Copyright   : Your copyright notice
 Description : Ram�n se pasa el d�a de Nochevieja contando los minutos que faltan para
 que den las uvas. �Puedes ayudarle?
 Entrada     : Serie de horas, cada una en una l�nea. Cada hora est� formada por las horas
 y los minutos separados por : y utilizando siempre dos d�gitos. Se utiliza una
 representaci�n en formato 24 horas (es decir, desde 00:00 a 23:59).
 La entrada termina cuando la hora es la medianoche (00:00), que no debe procesarse.
 Salida      : Para cada caso de prueba se mostrar� una l�nea con el n�mero de
 minutos que faltan para medianoche.
 Entrada de ejemplo:
 23:45
 21:30
 00:01
 00:00
 Salida de ejemplo:
 15
 150
 1439
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int minutos = 0;
	int horas = 0;
	int totalminutos = 0;
	scanf("%d:%d", &horas, &minutos);
	while(!(minutos == 0 && horas == 0)){
	 totalminutos = (60 - minutos) + ((23-horas)*60);
	 printf("%d\n", totalminutos);
     scanf("%d:%d", &horas, &minutos);
	}
	return EXIT_SUCCESS;
}
