/*
 * Ficha5Utils.c
 *
 *  Created on: 15/11/2022
 *      Author: 2145120
 */

#include "Ficha5Utils.h"

void validatePin() {
	int code = 9998;
	int pin = 0;
	puts("intruduza o Pin:");
	scanf("%i", &pin);
	if (pin == code)
		puts("PIN correto!");
	else {
		puts("PIN incorreto!");

	}
}

