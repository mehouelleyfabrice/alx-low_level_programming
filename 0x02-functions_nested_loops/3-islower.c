#include <ctype.h>
#include "main.h"
/**
 * _islower - Checks if @c is lowercase
 * @c: the character to be checked
 * With islower function include in C , _islower check if @c is lowercase
 * Return: 1 if @c is lowercase AND 0 otherwise
 */
int _islower(int c)
{
	int isLower;

	isLower = islower(c);
if (isLower == 0)
{
return (0);
}
else
{
return (1);
}
}
