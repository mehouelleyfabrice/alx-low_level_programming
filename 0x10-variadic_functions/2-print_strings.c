#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to be function
 *
 * Description: Prints numbers, followed by a new line
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			if (separator)
				printf("%s%s", check_strings(va_arg(ap, char *)), separator);
			else
				printf("%s", check_strings(va_arg(ap, char *)));
		}
		else
			printf("%s", va_arg(ap, char *));
	}
	printf("\n");
	va_end(ap);
}

/**
 * check_strings - check if string is NULL
 * @string: the string
 *
 * Description: Check if string is NULL
 * Return: pointer to @string
 */
char *check_strings(char *string)
{
	if (string == NULL)
		string = "(nil)";
	return (string);
}
