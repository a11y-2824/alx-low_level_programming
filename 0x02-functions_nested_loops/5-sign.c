#include "main.h"

/**
 * print_sign - prints the sign of a number
 * 
 * Description: sign
 * Return: is 1, 0 or -1
 */
int print_sign(int n)
{
	int numz;

	if (n > 0)
	{
		numz = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		numz = 0;
		_putchar('0');
	}
	else
	{
		numz = -1;
		_putchar('-');
	}
	return (numz);
}
