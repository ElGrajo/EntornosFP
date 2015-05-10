/*
 ============================================================================
 Name        : pipipipipi.c
 Author      : Julian Gawron
 Version     :
 Copyright   : Your copyright notice
 Description :
 Entrada
El programa recibir´a, por la entrada est´andar, m´ultiples casos de prueba.
Cada uno consiste en dos n´umeros, el primero indicando el n´umero de d´as
durante los cuales se ha emitido el GTS, y el segundo el n´umero de emisoras
que lo han hecho.
El ´ultimo caso de prueba, que no deber´a procesarse, tendr´a 0 en ambos valores.

Salida
Para cada caso de prueba el programa escribir´a, en una l´nea independiente,
el tiempo dedicado por las emisoras a radiar el GTS. El formato ser´a D:HH:MM:SS,
donde D indica n´umero de d´as, HH n´umero
de horas, MM n´umero de minutos y SS n´umero de segundos totales.
Como es l´ogico, HH no deber´a ser mayor que 23 y MM y SS no podr´an ser mayores
de 59. Adem´as deber´an escribirse siempre con dos d´gitos. Para el n´umero de
d´as (D), que no ser´a nunca mayor de 1.000, no se deben escribir d´gitos adicionales.
Entrada de ejemplo
1 1
3 9
300 2
0 0
Salida de ejemplo
0:00:02:24
0:01:04:48
1:00:00:00

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int dias;
	int emisoras;
	scanf("%d %d", &dias, &emisoras);
	while(dias != 0 && emisoras != 0){
	int segundosTotales = dias * emisoras * 24 * 6;
	int diasFinal = segundosTotales / 86400;
	int horasFinal = 0, minutosFinal = 0, segundosFinal = 0;
	if(diasFinal>1000){
		diasFinal = 1000;
	}else{
	segundosTotales = segundosTotales % 86400;
	horasFinal = segundosTotales / 3600;
	segundosTotales = segundosTotales % 3600;
	minutosFinal = segundosTotales / 60;
	segundosFinal = segundosTotales % 60;
	}
	printf("%d:%02d:%02d:%02d\n", diasFinal, horasFinal, minutosFinal, segundosFinal);

	scanf("%d %d", &dias, &emisoras);
	}
	return EXIT_SUCCESS;
}
