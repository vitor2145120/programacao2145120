/*
 ============================================================================
 Name        : ficha1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	int a =5, b=3, c=2, d=6, e=7;
	float numeros = 5.0f;
	float media = (a + b + c + d + e) / numeros;
	printf("A media dos %f valores e: %f \n" , numeros, media);


	float fahr = 212;
	float celsios = (fahr - 32) / 1.8;
	printf("%f fahrenheit sao %f celsios \n", fahr , celsios);

int horas = 8;
int minutos = 22;
int segundos = 10;
int total = horas * 3600 + minutos * 60 + segundos;


printf("%d" , total);




	return EXIT_SUCCESS;
}
