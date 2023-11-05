#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function actual.
 * @action: point variable to char.
 * @array: string.
 * @size: tamaño.
 * Description: iteration array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

