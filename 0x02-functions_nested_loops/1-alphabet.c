#include "main.h"

/**
 * main-print alphabet
 * followed by new line
 */

void print_alphabet(void)
{
	char l;
	for (l='a'; l<='z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
