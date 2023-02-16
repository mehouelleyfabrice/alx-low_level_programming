#include <stdlib.h>
#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * Return: void
 */
void times_table(void)
{
	int column = 0, row = 0, number = 0;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
		number = row * column;
		if (number > 9)
		{
			_putchar(number / 10 + '0');
			_putchar(number % 10 + '0');
		}
		else
		{
			if (column > 0)
			{
				_putchar(' ');
			}
			_putchar(number + '0');
		}
		if (column < 9)
		{
		_putchar(',');
		_putchar(' ');
		}
		}
		_putchar('\n');
	}
}
