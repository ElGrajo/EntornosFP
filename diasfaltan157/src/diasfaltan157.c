/*
 ============================================================================
 Name        : diasfaltan157.c
 Author      : Julian Gawron
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int vueltas = 0;
	int dias = 0;
	int mes = 0;
	scanf("%d", &vueltas);
	while(vueltas>0){
		int total = 0;
		scanf("%d %d", &dias, &mes);
		switch (mes){
		case 12:
			//diciembre
			total = 31 - dias;
			break;
		case 11:
			//noviembre
			total = 61 - dias;
			break;
		case 10:
			//oct 31
			total = 92 - dias;
			break;
		case 9://set 30
			total = 122 - dias;
			break;
		case 8://agosto 31
			total = 153 - dias;
			break;
		case 7://julio 31
			total = 184 - dias;
			break;
		case 6:
			//junio 30
			total = 214 - dias;
			break;
		case 5:
			//mayo 31
			total = 245 - dias;
			break;
		case 4:
			//abril 30
			total = 275 - dias;
			break;
		case 3:
			//marzo 31
			total = 306 - dias;
			break;
		case 2:
			//febrero 28
			total = 334 - dias;
			break;
		case 1:
			//enero 31
			total = 365 - dias;
			break;
		default:
			break;
		}
		printf("%d\n", total);
	vueltas--;
	}
	return EXIT_SUCCESS;
}
