#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: the string
 * Return: void
 */

void print_rev(char *s)
{
int length, i;

length = strlen(s);
for (i = (length - 1); i >= 0; i--)
	printf("%c", *(s + i));
printf("\n");
}
