#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @size: numbers of the number of elements in the array
 * @array: pointer to the array
 * @cmp: pointer to the function
 *
 * Description: Searches for an integer in an array
 * Return: index of the first element foud
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = -1;

	if (size <= 0 || !array || !cmp)
		return (-1);
	while (++i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
