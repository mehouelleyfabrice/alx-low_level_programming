#include "main.h"
/**
 * _memcpy - Copies memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int size = n;

	if (n > 0)
	{
		unsigned int i = 0;

		for (i = 0; i < size; i++)
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
