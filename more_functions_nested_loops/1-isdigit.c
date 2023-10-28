#include "main.h"
/**
 * _isdigit - function verifiquer.
 * @c: variable integrer.
 * Description: number verifiqued.
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
