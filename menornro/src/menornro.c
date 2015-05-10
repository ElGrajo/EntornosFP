/*
 ============================================================================
 Name        : menornro.c
 Author      : Julian Gawron
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	setbuf(stdout, NULL);
    int dato = 0;
    scanf("%d", &dato);
    while( dato > 0 ){
    	int resto = 0;
    	resto = dato % 9;
    	dato = dato - resto;
    	int cuantos9;
    	cuantos9 = dato/9;
    	char respuesta[cuantos9+1];

    	if(dato > 0){
    		int i;
    		for (i = 0; i < cuantos9; ++i) {
    			strcat(respuesta, '9');
			}

    	}
    	printf("%d\n", resto);

    	/*//Metodo viejo que peta ingresando 90
        long total = 0;
        long unidad = 1;
        while(dato > 0){

            if((dato) <= 9 ){
                total = total + (dato * unidad);
            }
            else{
                total = total + ( unidad * 9);
            }
            dato -= 9;
            unidad *= 10;
        }
        printf("%d\n", total);
        */
     scanf("%d", &dato);
    }//sale del programa sin hacer nada.
	return EXIT_SUCCESS;
}
