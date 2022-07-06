#include "main.h"
#include <stdio.h>

/**
 * void print_to_98(int n) - prints all natural numbers from n to 98
 * Numbers have a comma, followed by a space
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	putchar('\n');
}
