/*
 ============================================================================
 Name        : triangulos180.c
 Author      : Julian Gawron
 Version     :
 Copyright   : Your copyright notice
 Description : Triángulos
 Es bien sabido que la suma de los ángulos de cualquier triángulo es siempre 180 grados.
 En función del ángulo mayor, los triángulos se pueden clasificar en tres tipos:
  Acutángulo: el mayor de los tres ángulos es agudo (menor de 90 grados).
  Rectángulo: el mayor de los tres ángulos es recto (exactamente 90 grados).
  Obtusángulo: el mayor de los tres ángulos es obtuso (mayor de 90 grados).
 Tipos de triángulos según sus ángulos
 ¿Eres capaz de, a partir de la longitud de tres segmentos, decir el tipo de triángulo
 que forman?

 Entrada
 La entrada consistirá en un primer número indicando el número de casos de prueba
 que vendrán después.
 Cada caso de prueba ocupará una línea, y estará compuesto de tres números enteros no
 negativos menores que 215 - 1, separados por espacios y no necesariamente ordenados.
 Cada entero representará la longitud de cada uno de los lados de un triángulo.

 Salida
 Para cada caso de prueba, el programa indicará el tipo de triángulo, escribiendo
 ACUTANGULO, RECTANGULO u OBTUSANGULO. Si resulta imposible formar un triángulo con
 esos segmentos, escribirá IMPOSIBLE.

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
