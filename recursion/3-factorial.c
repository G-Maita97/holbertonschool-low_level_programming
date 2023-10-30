#include "main.h"
/**
 * factorial - print factorial.
 * @n: variable
 * Description: print factorial with _putchar.
 * Return: 0
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);

	if (n == 0 || n == 1)
	return (1);

	return (n * factorial(n - 1));
}
