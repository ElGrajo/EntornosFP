/*
 ============================================================================
 Name        : prueba.c
 Author      : Julian Gawron
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

   int nro;
   scanf("%d", &nro);
   printf("%.*s", nro*12, "Hola mundo.\nHola mundo.\nHola mundo.\nHola mundo.\nHola mundo.\n");

   return 0;
}

