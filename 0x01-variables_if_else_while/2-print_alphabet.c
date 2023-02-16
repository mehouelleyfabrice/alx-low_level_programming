#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  main - Entry point
 *  Display all alphabet letters
 *  Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
	int count;
do {
	putchar(c);
	count++;
	c++;
} while (count < 26);
putchar('\n');
return (0);
}
