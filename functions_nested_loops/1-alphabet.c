#include "main.h"
/**
 * print_alphabet - print with putchar albabet.
 * Description: print alfabet to the standard output.
 * Return: 0
 */
void print_alphabet(void)
	{
		char N;

		for (N = 'a'; N <= 'z'; N++)
		{
			_putchar(N);
		}
		_putchar('\n');
	}
