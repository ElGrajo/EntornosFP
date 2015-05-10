/*
 ============================================================================
 Name        : fractales.c
 Author      : Julian Gawron
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int dato;
	scanf("%d", &dato);
    while(dato != 0){
        printf("%d",fractales(dato));
        scanf("%d", &dato);
    }
    return 0;
}

int fractales(int n){
    if(n == 1)
        return 4;
    else{
        return n * 4 + fractales((int)(n/2))*4;
   }
}
