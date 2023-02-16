#include "main.h"
/**
 * print_alphabet - prints alphabet letters in lowercase
 * Prints alphabet in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char c = 'a';
	int count = 0;

do {
	putchar(c);
	count++;
	c++;
} while (count < 26);
putchar('\n');
}
