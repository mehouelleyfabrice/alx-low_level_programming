#include <ctype.h>
#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @c: the character to be checked
 * Return: A last digit of @c
 */
int print_last_digit(int c)
{
	int lastDigit = c;

	lastDigit %= 10;

	if (lastDigit < 0)
	{
		lastDigit *= -1;
	}
_putchar(lastDigit + '0');
return (lastDigit);
}
