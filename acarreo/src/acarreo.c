/*
 ============================================================================
 Name        : acarreo.c
 Author      : Julian Gawron
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	char numero1[1000];
	char numero2[1000];
	char resultado[1000];
	int resto = 0;
	int acarreos = 0;
	scanf("%s %s", numero1, numero2);
	printf("%20s\n", numero1);
	printf("%20s\n", numero2);
	int laultimaNro1 = strlen(numero1)-1;
	int laultimaNro2 = strlen(numero2)-1;
	if(laultimaNro1 != laultimaNro2 && laultimaNro1<laultimaNro2){
		char* aux;
		aux = numero1;
		numero1 = numero2;
		numero2 = aux;
	}
	int menor = laultimaNro1<laultimaNro2?laultimaNro1:laultimaNro2;
	for (i = 0; i <= menor; ++i) {
		int cifra1 = (int)(numero1[menor-i])-48;
		int cifra2 = (int)(numero2[menor-i])-48;
		int cifra3 = (cifra1 + cifra2)+resto;
		if(cifra3>9){
			cifra3 = cifra3 % 10;
			resto = 1;
			acarreos++;
		}else{
			resto = 0;
		}
		resultado[menor-i] = (char)(cifra3+48);
	}

	if(laultimaNro1 != laultimaNro2){

	}

	printf("%20s\n", resultado);
    printf("Acarreos: %d", acarreos);
	return EXIT_SUCCESS;
}
