/*
 ============================================================================
 Name        : 3_ex11.c
 Author      : Abdelrahman Mamdouh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main(void) {
	while(1)
	{

	float num;
	float f = 0;
	printf("Enter a number to be checked: ");
		fflush(stdin); fflush(stdout);
		scanf("%f",&num );
		if (num > f)
			printf("%f is positive\n",num);
		else if (num < f)
			printf("%f is negative\n",num);
		else if (num == f)
			printf("The number is zero\n");
	}
	return 0;
}
