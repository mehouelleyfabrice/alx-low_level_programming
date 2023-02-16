#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Display  all single digit numbers of base 10,separate by ,
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;

for (i = 48; i <= 57; i++)
{
putchar(i);
if (i != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
