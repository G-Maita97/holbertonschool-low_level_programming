#include "main.h"
/**
 * _strlen_recursion - print string.
 * @s: variable
 * Description: print string with _putchar.
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int length;
	int i;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
