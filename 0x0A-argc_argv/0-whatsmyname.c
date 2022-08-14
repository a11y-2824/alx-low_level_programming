#include <stdio.h>

/**
* main -  a program that prints its name
* @argc: arguement count
* @argv: array of pointers to CLI arguement
*
* Return: 0
**/
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
