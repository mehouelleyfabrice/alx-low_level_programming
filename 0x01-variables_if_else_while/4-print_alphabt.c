#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Display alphabet letters without q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
	int count;
do {
	if (c != 'q' && c != 'e')
	{
	putchar(c);
	}
	count++;
	c++;
} while (count < 26);
putchar('\n');
return (0);
}
