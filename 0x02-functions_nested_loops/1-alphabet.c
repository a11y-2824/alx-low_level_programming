#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 * 
 * Description: lower case 
 * Return: Always 0
 */
void print_alphabet(void)
{
	char l;
	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
