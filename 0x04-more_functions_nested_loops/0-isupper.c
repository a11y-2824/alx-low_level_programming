#include "main.h"

/**
 * _isupper -checks for uppercase character.
 * return : 1
 * otherwiser return :0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
