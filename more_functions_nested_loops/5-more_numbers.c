#include "main.h"
/**
 * more_numbers - print numbers.
 * Description: print with _putchar.
 * Return: 0
 */
void more_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		int b;

		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar('0' + b / 10);
			}
			_putchar('0' + b % 10);
		}
		_putchar('\n');
	}

}

