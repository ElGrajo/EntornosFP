/*
 ============================================================================
 Name        : relojes153.c
 Author      : Julian Gawron
 Version     :
 Copyright   : Your copyright notice
 Description : Reloj a trav�s del espejo 153
 Hoy te has despertado y al mirar, con lega�as en los ojos, el reloj de agujas de tu
 habitaci�n te has llevado un susto de muerte. �Las 8:05! ��Ya llegas tarde!!
 Afortunadamente enseguida te has dado cuenta de que estabas viendo el reloj a trav�s
 del espejo. Al mirar al reloj real, has visto que eran solo las 3:55. No s�lo no
 llegas tarde, sino que todav�a hay tiempo para otro buen sue�ecito...

 �Eres capaz de hacer un programa que, dada una hora en el espejo, devuelva la hora real?

 Entrada
 La primera l�nea de la entrada contiene un entero que indica el n�mero de horas
 que siguen. Cada una de las l�neas siguientes especifica una hora vista en el
 espejo. La hora tendr� el formato HH:MM, y estar� comprendida entre 01:00 y 12:59.

 Salida
 Para cada hora le�da, el programa debe escribir, en una l�nea independiente,
 la hora real con el formato HH:MM, y tambi�n comprendida entre 01:00 y 12:59.

 Entrada de ejemplo
 3
 08:05
 12:00
 10:09
 Salida de ejemplo
 03:55
 12:00
 01:51
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int minutos = 0;
	int horas = 0;
	int vueltas = 0;
	scanf("%d", &vueltas);
	while(vueltas>0){
	 scanf("%d:%d", &horas, &minutos);
	 //para que no aparezca el 60
	 minutos = (minutos!=0)? 60 - minutos : minutos;
	 //Si son en punto, 12 - la hora
	 //si no 11 - la hora
	 horas = (minutos==0)? 12 - horas : 11 - horas;
	 //Si es 0, se muestra 12. y si es -1 muestra 11
	 horas = (horas < 1 )? 12 + horas : horas;

	 printf("%02d:%02d\n", horas, minutos);

	vueltas--;
	}

	return EXIT_SUCCESS;
}
