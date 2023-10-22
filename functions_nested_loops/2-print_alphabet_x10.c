#include "main.h"
/**
 * print_alphabet_x10 - print with putchar albabetx10.
 * Description: print alfabetx10 to the standard output.
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char L;
	int N;

	for (N = 1; N <= 10; N++)
	{
		for (L = 'a'; L <= 'z'; L++)
		{
			_putchar(L);
		}
		_putchar('\n');
	}
}
