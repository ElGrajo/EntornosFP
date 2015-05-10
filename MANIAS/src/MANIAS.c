/*
 ============================================================================
 Name        : MANIAS.c
 Author      : Julian Gawron
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int semanas, vueltas;
	char diasSemana[7] = {'L','M','X','J','V','S','D'};
	scanf("%d", &vueltas);
	while(vueltas > 0){
		int pastiAcumul[7] = {0,0,0,0,0,0,0};
		scanf("%d", &semanas);
	    while(semanas > 0){
	     char semana[8];
	     scanf("%s", semana);
	      if(semana[0]=='*')
	    	  ++pastiAcumul[0];
	      if(semana[1]=='*')
	    	  ++pastiAcumul[1];
	      if(semana[2]=='*')
	    	  ++pastiAcumul[2];
	      if(semana[3]=='*')
	    	  ++pastiAcumul[3];
	      if(semana[4]=='*')
	    	  ++pastiAcumul[4];
	      if(semana[5]=='*')
	    	  ++pastiAcumul[5];
	      if(semana[6]=='*')
	    	  ++pastiAcumul[6];
	    semanas--;
	    }
	    //A contar las semanas y los días.
	   /* printf("%d %d %d %d %d %d %d", pastiAcumul[0],
	    		pastiAcumul[1], pastiAcumul[2], pastiAcumul[3],
				pastiAcumul[4], pastiAcumul[5], pastiAcumul[6]);*/
	    int contador = 1;
	    int diaNro = 0;
	    int dias = pastiAcumul[0];
	    while(contador < 7)
	    {
	    	if(pastiAcumul[contador]< dias){
	    		dias = pastiAcumul[contador];
	    		diaNro = contador;
	    	}
	    	contador++;
	    }
	   // printf("el dia %d de la %d semana", diaNro+1, pastiAcumul[diaNro]+1);
	    printf("%c %d\n", diasSemana[diaNro], pastiAcumul[diaNro]+1);


	vueltas--;
	}
	return EXIT_SUCCESS;
}
