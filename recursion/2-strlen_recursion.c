#include "main.h"
/**
 * _strlen_recursion - print string.
 * @s: variable
 * Description: print string with _putchar.
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));

	}
}
