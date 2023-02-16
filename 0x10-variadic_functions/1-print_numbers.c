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
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
			{
				if (separator)
					printf("%d%s", va_arg(ap, int), separator);
				else
					printf("%d", va_arg(ap, int));
			}
			else
				printf("%d", va_arg(ap, int));
		}
	}
	printf("\n");
	va_end(ap);
}
