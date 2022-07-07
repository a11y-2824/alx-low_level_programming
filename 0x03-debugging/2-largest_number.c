#include "main.h"

/**
 * largest_number -  prints out the largest of three numbers
 * a - first number
 * b - second number
 * c - third number
 * return - largest
 *
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
