#include "main.h"
/**
 * print_rev - print rev txt.
 * @*s: variable to pointer
 * @s: variable char
 * Description: print rev txt with _putchar.
 * Return: 0
 */
void print_rev(char *s)
{
	int n;
	int i;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
