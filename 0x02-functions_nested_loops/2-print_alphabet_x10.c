#include "main.h"
/**
 * print_alphabet - Print the alphabet, in lowercase
 * Print the alphabet, in lowercase, followed by a new line
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';
	int count = 0;

do {
	putchar(letter);
	letter++;
	count++;
} while (count < 26);
putchar('\n');
}
/**
 * print_alphabet_x10 - print 10 times the alphabet, in lowercase
 * print 10 times the alphabet, in lowercase, followed by a new line
 * with print_alphabet function
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;

for (i = 0; i < 10; i++)
{
	print_alphabet();
}
}
