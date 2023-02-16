#include <ctype.h>
#include "main.h"

/**
 * _isdigit - Checks for a digit (0 through 9)
 * @c: the character to be checked
 * Return: 1 if @c is a digit AND 0 otherwise
 */

int _isdigit(int c)
{
if (isdigit(c))
{
	return (1);
}
else
{
	return (0);
}
}
