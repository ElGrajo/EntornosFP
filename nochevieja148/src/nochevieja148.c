/*
 ============================================================================
 Name        : nochevieja148.c
 Author      : Julian Gawron
 Version     :
 Copyright   : Your copyright notice
 Description : Ramón se pasa el día de Nochevieja contando los minutos que faltan para
 que den las uvas. ¿Puedes ayudarle?
 Entrada     : Serie de horas, cada una en una línea. Cada hora está formada por las horas
 y los minutos separados por : y utilizando siempre dos dígitos. Se utiliza una
 representación en formato 24 horas (es decir, desde 00:00 a 23:59).
 La entrada termina cuando la hora es la medianoche (00:00), que no debe procesarse.
 Salida      : Para cada caso de prueba se mostrará una línea con el número de
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
