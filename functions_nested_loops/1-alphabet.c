#include "main.h"
/**
 * main - print putchar
 * Description: print putchar to the standard output
 * Return: 0
 */
int main(void)
{
	void print_alphabet(void);
	{
		char N;

		for (N = 'a'; N <= 'z'; N++)
		{
			_putchar(N);
		}
		_putchar('\n');

	}
	return (0);
}
