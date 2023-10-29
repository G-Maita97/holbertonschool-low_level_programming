#include "main.h"
/**
 * puts_half - print numbers.
 * @str: variable to pointer
 * Description: print numbers with _putchar.
 * Return: 0
 */
void puts_half(char *str)
{
	int length;
	int half_point;
	int i;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		half_point = length / 2;
	}
	else
	{
		half_point = (length - 1) / 2;
	}

	for (i = half_point; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
