#include <ctype.h>
#include "main.h"
/**
 * _isalpha - Checks if @c is a alphabetic character
 * @c: the character to be checked
 * With isalpha function include in c, _isalpha check if @c is lowercase
 * Return: 1 if c is a letter, lowercase or uppercase AND 0 otherwise
 */
int _isalpha(int c)
{
	int isAlpha;

	isAlpha = isalpha(c);
if (isAlpha == 0)
{
return (0);
}
else
{
return (1);
}
}
