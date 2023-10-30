#include "main.h"
/**
 * _pow_recursion - print numbers.
 * @x: variable
 * @y: variable
 * Description: print recursion with _putchar.
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);

	if (y == 0)
	return (1);

	return (x * _pow_recursion(x, y - 1));
}
