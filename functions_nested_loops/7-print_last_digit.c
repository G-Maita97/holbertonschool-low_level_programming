#include "main.h"
/**
 * print_last_digit - print with putchar last digit.
 * @n: variable
 * Description: print last digit to the standard output.
 * Return: 0
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;
	{
		if (last_digit < 0)
		last_digit *= (-1);
		_putchar('0' + last_digit);
		return (last_digit);
	}
}

