#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: Pointer to string location
 * @accept: bytes to filter
 *
 * Return: Pointer to memory or Null if no match
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;

	while (s[i])
	{
	j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
