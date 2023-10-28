#include "main.h"
/**
 * _isupper - function for comprobar.
 * @c: variable entere.
 * Description: verifiqued mayus or minus.
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
