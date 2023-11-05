#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function actual
 * @f: ponit to function void.
 * @name: point variable to char
 * Description: print name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
