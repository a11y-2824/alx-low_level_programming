#include <unistd.h>

/**
 * _putchar - prints c
 * c - print
 * return : 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
