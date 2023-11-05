#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function actual
 * @array: string.
 * @size: point variable to char
 * @cmp: pointer to function.
 * Description: print name
 * Return: -1
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
