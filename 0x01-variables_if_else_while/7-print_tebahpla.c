#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Display alphabet letters in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
char c = 'z';
int count;
do {
	putchar(c);
	count++;
	c--;
} while (count < 26);
putchar('\n');
return (0);
}
