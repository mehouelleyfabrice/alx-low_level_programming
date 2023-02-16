#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory area
 * @b: The constant byte
 * @n: Numer of bytes to fill
 * Return: Pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int size = n;

	if (size > 0)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
			s[i] = b;
	}
	return (s);
}
