#include "main.h"
/**
 * _strchr - Locates a chacarter in a string
 * @s: The string
 * @c: The character
 * Return: pointer to the first occurrence @c in @s or NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if  (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
