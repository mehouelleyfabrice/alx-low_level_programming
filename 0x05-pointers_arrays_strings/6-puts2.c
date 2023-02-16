#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: the string
 * Return: void
 */

void puts2(char *str)
{
int i, length;

length = strlen(str);
for (i = 0; i < length; i++)
{
	if (i % 2 == 0)
		printf("%c", str[i]);
}
printf("\n");
}
