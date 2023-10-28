#include "main.h"
/**
 * print_line - print lines.
 * @n: Variable integer
 * Description: print lines with _putchar.
 * Return: 0
 */
void print_line(int n)
{
	if (n >= 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else if (n < 0)
	{
		_putchar('\n');
	}
}

