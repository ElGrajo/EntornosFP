/*
 ============================================================================
 Name        : triangulos180.c
 Author      : Julian Gawron
 Version     :
 Copyright   : Your copyright notice
 Description : Tri�ngulos
 Es bien sabido que la suma de los �ngulos de cualquier tri�ngulo es siempre 180 grados.
 En funci�n del �ngulo mayor, los tri�ngulos se pueden clasificar en tres tipos:
  Acut�ngulo: el mayor de los tres �ngulos es agudo (menor de 90 grados).
  Rect�ngulo: el mayor de los tres �ngulos es recto (exactamente 90 grados).
  Obtus�ngulo: el mayor de los tres �ngulos es obtuso (mayor de 90 grados).
 Tipos de tri�ngulos seg�n sus �ngulos
 �Eres capaz de, a partir de la longitud de tres segmentos, decir el tipo de tri�ngulo
 que forman?

 Entrada
 La entrada consistir� en un primer n�mero indicando el n�mero de casos de prueba
 que vendr�n despu�s.
 Cada caso de prueba ocupar� una l�nea, y estar� compuesto de tres n�meros enteros no
 negativos menores que 215 - 1, separados por espacios y no necesariamente ordenados.
 Cada entero representar� la longitud de cada uno de los lados de un tri�ngulo.

 Salida
 Para cada caso de prueba, el programa indicar� el tipo de tri�ngulo, escribiendo
 ACUTANGULO, RECTANGULO u OBTUSANGULO. Si resulta imposible formar un tri�ngulo con
 esos segmentos, escribir� IMPOSIBLE.

 Entrada de ejemplo			Salida de ejemplo
 4
 3 4 4						ACUTANGULO
 5 3 4						RECTANGULO
 3 4 6						OBTUSANGULO
 3 4 7						IMPOSIBLE
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int vueltas = 0;
	int lado1 = 0;
	int lado2 = 0;
	int lado3 = 0;
	scanf("%d", &vueltas);
	while(vueltas>0){
		scanf("%d %d %d", &lado1, &lado2, &lado3);
		//Primero ordenar los lados
		int aux = 0;
		if(lado1>lado2){
			aux = lado1;
			lado1 = lado2;
			lado2 = aux;
		}
		if(lado2>lado3){
			aux = lado3;
			lado3 = lado2;
			lado2 = aux;
			if(lado1>lado2){
				aux = lado1;
				lado1 = lado2;
				lado2 = aux;
			}
		}

		//Verifica si el triangulo es posible
		if((lado1 + lado2 > lado3 )
			&&(lado2 + lado3 > lado1)
			&&(lado1 + lado3 > lado2)){
			//calcula los cuadrados
			lado1 = lado1 * lado1;
			lado2 = lado2 * lado2;
			lado3 = lado3 * lado3;
			if(lado3 < lado1 + lado2)
				printf("ACUTANGULO\n");
			else if(lado3 == lado1 + lado2)
				printf("RECTANGULO\n");
			else
				printf("OBTUSANGULO\n");
		}else{
			printf("IMPOSIBLE\n");
		}
		vueltas--;
	}
	return EXIT_SUCCESS;
}
