#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 * Return: void
 */

void rev_string(char *s)
{
int  length, i, j, temp;

length = strlen(s);
for (i = 0; i < (length - 1); i++)
{
for (j = i + 1; j > 0; j--)
{
temp = *(s + j);
*(s + j) = *(s + (j - 1));
*(s + (j - 1)) = temp;
}
}
}
