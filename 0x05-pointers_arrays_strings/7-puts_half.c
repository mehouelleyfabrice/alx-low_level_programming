#include "main.h"

/**
 * puts_half - printf half
 * @str: the string
 * Return: Void
 */

void puts_half(char *str)
{
	int length, n, i;

	length = strlen(str);
	if (length % 2 == 0)
	{
	i = (length - 1) / 2;
	}
	else
	{
	i = length / 2;
	}
	for (n = i + 1; n < length; n++)
		printf("%c", str[n]);
	printf("\n");
}
