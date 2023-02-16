#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: the first point
 * @b: the second point
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
