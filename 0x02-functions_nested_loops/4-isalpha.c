#include "main.h"

/**
 * _isalpha -  checks for alphabetic character
 * description - Returns 1 if c is a letter
 * return - 0
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
