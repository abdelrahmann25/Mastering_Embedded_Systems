/*
 ============================================================================
 Name        : 4_lab3.c
 Author      : Abdelrahman Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	char text[] = { 'h', 'e', 'l', 'l', 'o', 0 };
	int i;
	printf("%s\n",&text[0]);
	for(i=0; text[i] != 0 && i<sizeof(text);i++) {
		printf("%c", text[i]);

	}

}
