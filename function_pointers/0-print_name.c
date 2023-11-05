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
	if (f == NULL)
	{
		printf("No printing function provided for name: %s\n", name);
	}
	else
	{
		f(name);
	}
}
