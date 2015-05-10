/*
 ============================================================================
 Name        : hol.c
 Author      : asdf
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	/*
	int a;
	scanf("%d", &a);
   if((a>0)||a<6){
	int i = 0;
	while(i<a){
	 printf("Hola Mundo.\n");
	 i++;
	}
   }
*/
   //Mis pruebas

   //Sobre Caracteres
   char texto[40];         /* Para guardar hasta 39 letras */
   printf("Introduce una palabra: ");
   scanf("%s", texto); //Cuando es un texto no hace falta poner &texto
   //strlen cuenta cuanto lugar hay utilizado hasta el caracter \0
   //Hay que incluir la librería <string.h>
   printf("Has tecleado %d letras", strlen(texto));

   return 0;
}
