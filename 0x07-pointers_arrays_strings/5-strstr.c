#include "main.h"
/**
 * _strstr - That locates a string
 * @haystack: The string
 * @needle: The substring
 * Return: A pointer to the beginning of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, x;

	if (needle[i] == '\0')
		return (NULL);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[i])
		{
			x = i, j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[x] == needle[j])
					x++, j++;
				else
					break;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
		i++;
	}
	return (NULL);
}
