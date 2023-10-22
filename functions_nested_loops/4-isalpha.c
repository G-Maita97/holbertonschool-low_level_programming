#include "main.h"
/**
 * _isalpha - verifiqued letters.
 * @c: variable declared
 * Description: print alfabetx10 to the standard output.
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
