#include "main.h"

/**
 * string_toupper - changes all lowercases letters of a string to uppercase
 * @str: the string
 * Return: char *
 */

char *string_toupper(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 97 && str[i] <= 122)
{
	str[i] -= 32;
}
}
return (str);
}
