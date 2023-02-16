#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Display Single digit numbers of base 16
 * Return: Always 0 (Success)
 */
int main(void)
{
char c = '0';
for (; c <= '9'; c++)
	putchar(c);
c = 'a';
for (; c <= 'f'; c++)
	putchar(c);
putchar('\n');
return (0);
}
