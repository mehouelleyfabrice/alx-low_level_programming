#include "main.h"

/**
 * print_array - prints n elements
 * @a: the array
 * @n: the number of elements of array to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
int i = 0;

for (; i < n; i++)
{
	printf("%d", *(a + i));
	if (i != (n - 1))
		printf(", ");
}
printf("\n");
}
