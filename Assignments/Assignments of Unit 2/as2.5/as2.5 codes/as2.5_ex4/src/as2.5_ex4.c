/*
 ============================================================================
 Name        : 5_ex4.c
 Author      : Abdelrahman Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//Program to calculate the power of number using recursion
#include <stdio.h>
#include <stdlib.h>

int calc_power(int base, int power)
{
	if (power != 0)
	{
	return base * calc_power(base, power-1);
	}
	else
		return 1;
}

int main(void) {
	int base, power;
	printf("Enter Base number:");
	fflush(stdin); fflush(stdout);
	scanf("%d", &base);
	fflush(stdin); fflush(stdout);
	printf("Enter power number:");
	fflush(stdin); fflush(stdout);
	scanf("%d", &power);
	fflush(stdin); fflush(stdout);
	printf("%d^%d = %d", base, power, calc_power(base,power));
	return EXIT_SUCCESS;
}