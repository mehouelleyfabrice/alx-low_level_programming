#include "main.h"
/**
 * print_to_98 - print all natural between the argument and 98
 * @n: integer to start printing from
 * Return: void
 */
void print_to_98(int n)
{
while (n != 98)
{
printf("%d, ", n);
if (n > 98)
	n--;
else
	n++;
}
printf("%d\n", n);
}
