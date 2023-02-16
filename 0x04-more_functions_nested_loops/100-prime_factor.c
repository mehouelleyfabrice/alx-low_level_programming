#include "main.h"

/**
 * main - largest prime factor of the number 612852475143
 * Return: Always 0 (Success)
 */

int main(void)
{
long int x = 612852475143, y ;

for (y = 2; y < x; y++)
{
	if (x % y == 0)
	{
		x = x / y;
	}
}
printf("%ld\n", y);
return (0);
}
