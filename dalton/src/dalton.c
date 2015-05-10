/*
 ============================================================================
 Name        : dalton.c
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
	int figuras, i;
	char sonDalton = 1;
	scanf("%d", &figuras);
	while(figuras>0)
	      {
	long long primero = 0;
	long long segundo = 0;
	scanf("%lld", &primero);
	scanf("%lld", &segundo);
	long long dif = primero - segundo;
	if(dif==0) sonDalton = 0;
	 for(i = 0; i > figuras - 2; i++){
		scanf("%lld", &primero);
		if(segundo - primero != dif)
			sonDalton = 0;
		segundo = primero;
	      }
	if(sonDalton==1)
		printf("DALTON\n");
	else
		printf("DESCONOCIDOS\n");

	scanf("%d", &figuras);
	}
	return 0;
}
