/*
 ============================================================================
 Name        : 4_ex8.c
 Author      : Abdelrahman Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//Program for reversing a string without using reverse function from libraries
#include <stdio.h>
#include <string.h>
int main(void) {
	char text[100];
	char revtext[100];
	int i,strl=0, counter=0;

	printf("Enter string you want to reverse: ");
	fflush(stdin); fflush(stdout);
	gets(text);
	fflush(stdin); fflush(stdout);
	strl=strlen(text)-1;
	counter = strl;
	for(i=0;i<=counter;i++)
	{fflush(stdin); fflush(stdout);
		revtext[strl]=text[i];
		strl--;
	}
	revtext[counter+1]='\0';
	fflush(stdin); fflush(stdout);
	printf("Reversed String is: %s", revtext);
	return 0;
}