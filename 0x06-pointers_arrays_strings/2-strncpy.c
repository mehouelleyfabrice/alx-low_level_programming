#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: main string
 * @src: completed string
 * @n: numbers of characters
 * Return: char *
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}

