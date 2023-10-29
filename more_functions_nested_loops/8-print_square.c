#include "main.h"
/**
 * print_square - print squares
 * @size: variable int..
 * Description: print square with _putchar.
 * Return: 0
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < size; i++)
		{
			int c;

			for (c = 0; c < size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
