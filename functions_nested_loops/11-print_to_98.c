#include "main.h"
/**
 * print_to_98 - print with putchar n98.
 * @n: variable
 * Description: print n98 to the standard output.
 * Return: 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (int i = n; i <= 98; i++)
		{
			_putchar(i + '0');
			if (i < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (int i = n; i >= 98; i--)
		{
			_putchar(i + '0');
			if (i > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
		_putchar('\n');
}
