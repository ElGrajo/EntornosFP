/*
 ============================================================================
 Name        : esoteric.c
 Author      : Julian Gawron
 Entrada de ejemplo
3
4 9 2 3 5 7 8 1 6
2
1 2 3 4
4
16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
3
28 21 26 23 25 27 24 29 22
3
2 8 1 6 3 5 7 4 9
0
Salida de ejemplo
ESOTERICO
NO
ESOTERICO
DIABOLICO
NO
 ============================================================================
 */
/*
 *
Entrada:
3
4 9 2 3 5 7 8 1 6
2
1 2 3 4
4
16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
3
28 21 26 23 25 27 24 29 22
3
2 8 1 6 3 5 7 4 9
0
Salida:

ESOTERICO
NO
ESOTERICO
DIABOLICO
NO
 *
 * */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int dimensiones = 0;
	int i, j;
	scanf("%d", &dimensiones);
	while(dimensiones > 0){
	int datos[dimensiones][dimensiones];
	for (i = 0; i < dimensiones; ++i) {
		for (j = 0; j < dimensiones; ++j) {
			scanf("%d", &datos[i][j]);
		}
	}
	//Valores horizontales
	 int nroMagico = 0;
	 int esMagico = 1;

	             // Verificar Si es mágico horizontal y vertical
	             for (i = 0; i < dimensiones; i++) {
	                 int pruebaHoriz = 0;
	                 int pruebaVerti = 0;

	                 for (j = 0; j < dimensiones; j++) {
	                     pruebaHoriz += datos[i][j];
	                     pruebaVerti += datos[j][i];
	                 }
	                 if(!(pruebaHoriz == pruebaVerti)){
	                     esMagico = 0;
	                 }
	                 nroMagico = pruebaHoriz;
	             }
	             //verificar si se dan las diagonales
	             int pruebadiago1 = 0;
	             int pruebadiago2 = 0;

	             for (i = 0; i < dimensiones ; i++) {
	                 pruebadiago1 += datos[i][i];
	                 pruebadiago2 += datos[i][dimensiones - 1 -i];
	             }
	             if(!(pruebadiago1 == nroMagico)||!(pruebadiago2 == nroMagico)){
	               esMagico = 0;
	             }



	printf("El numero magico es: %d\n", esMagico);
	scanf("%d", &dimensiones);
	}
	return EXIT_SUCCESS;
}
