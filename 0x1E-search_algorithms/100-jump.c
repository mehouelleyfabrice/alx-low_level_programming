#include "search_algos.h"

/**
 * jump_search - Jump search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t left = 0;
	size_t right = jump;
	size_t i;

	if (!array)
		return (-1);
	while (right < size && array[right] < value)
	{
		left = right;
		right += jump;
	}
	if (right >= size)
		right = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", left, right);
	for (i = left; i <= right; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		if (array[i] > value)
		{
			break;
		}
	}
	return (-1);
}

