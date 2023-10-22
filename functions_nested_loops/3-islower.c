#include "main.h"
/**
 * _islower - see min and mayus.
 * @c: The value to be used in the operation.
 * Description: c variable declared for print.
 * Return: 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
