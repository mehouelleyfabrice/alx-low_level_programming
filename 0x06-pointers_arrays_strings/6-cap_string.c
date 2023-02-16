#include "main.h"

/**
 * cap_string - Capitalizez all words of a string
 * @str: the string
 * Return: char*
 */

char *cap_string(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if ((str[i] == ',' ||
	str[i] == ';' ||
	str[i] == '.' ||
	str[i] == '!' ||
	str[i] == '?' ||
	str[i] == '"' ||
	str[i] == '(' ||
	str[i] == ')' ||
	str[i] == '{' ||
	str[i] == '}' ||
	str[i] == ' ' ||
	str[i] == '\t' ||
	str[i] == '\n' ||
	str[i] == ' ') && str[i + 1] >= 97 && str[i + 1] <=122)
{
str[i + 1] -= 32;
}
}
return (str);
}
