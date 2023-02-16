#include "main.h"

/**
 * _strncat - that concatenates two strings
 * @dest: main string
 * @src: completed string
 * @n: number of characters
 * Return: char*
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
