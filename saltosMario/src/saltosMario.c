/*
 ============================================================================
 Name        : saltosMario.c
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
	int vueltas = 0, saltos = 0;
	scanf("%d", &vueltas);
	while(vueltas>0){
		scanf("%d", &saltos);
		int arriba = 0, abajo = 0;
		int alturaAct = 0, alturaNueva = 0;
		//Esto es para tener la altura de la primer muralla
		scanf("%d", &alturaNueva);
		saltos--;
		while(saltos>0){
			//Guarda el dato antiguo
			    alturaAct = alturaNueva;
			//Toma el nuevo dato
				scanf("%d", &alturaNueva);
			//Verifica a que contador hay que sumar.
				if(alturaNueva>alturaAct)
					arriba++;
				else if(alturaNueva<alturaAct)
					abajo++;

		saltos--;
		} //Fin del while saltos
		printf("%d %d\n", arriba, abajo);
	vueltas--;
	}//Fin del while vueltas
	return EXIT_SUCCESS;
}
