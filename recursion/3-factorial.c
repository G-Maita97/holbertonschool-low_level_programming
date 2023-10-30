#include "main.h"
/**
 * factorial - print factorial.
 * Description: print factorial with _putchar.
 * Return: 0
 */
int factorial(int n)
{
	int c;
	int i;

	if (n < 0)
	return (-1);

	if (n == 0 || n == 1)
	return (1);
	
	c = 1;
	for (i = 2; i <= n; i++)
	{
		c *= i;
	}
	return (c);
}
