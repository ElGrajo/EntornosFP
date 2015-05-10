/*
 ============================================================================
 Name        : aho.c
 Author      : Julian Gawron
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	scanf("%d", &a);
  	switch(a){
  	case 5:
	 printf("Hola mundo.\nHola mundo.\nHola mundo.\nHola mundo.\nHola mundo.\n");
	 break;
  	case 4:
     printf("Hola mundo.\nHola mundo.\nHola mundo.\nHola mundo.\n");
     break;
  	case 3:
  	 printf("Hola mundo.\nHola mundo.\nHola mundo.\n");
  	 break;
  	case 2:
  	 printf("Hola mundo.\nHola mundo.\n");
  	 break;
  	case 1:
  	 printf("Hola mundo.\n");
  	 break;
  	default:
  			//acciones
  			break;
   }
	return 0;
}
