#include "main.h"
/**
 *_puts_recursion - prototype function.
 *@*s: value contenide the s.
 *@s: variable
 *Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
