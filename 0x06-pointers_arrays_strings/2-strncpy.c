#include "main.h"

/**
 *_strncpy -  a function that copies a string
 *@dest: A pointer to a character
 *@src: A pointer to a character 
 *@n: value
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)

{
	int i;
	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);

}
