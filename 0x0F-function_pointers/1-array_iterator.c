#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @size: size of array
 * @array: array to be targeted
 * @action: function to be executed
 *
 * Description: executes a function given as a parameter
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = -1;

	if (!array || !action)
		return;
	while (++i < size)
		action(array[i]);
}
