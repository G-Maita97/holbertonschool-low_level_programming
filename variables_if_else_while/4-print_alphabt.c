#include <stdio.h>
/**
 * main - print alfabet.
 * Description: print alfabet to the standart output.
 * Return: 0
 */
int main(void)
{
	char L;

	for (L = 'a'; L <= 'z'; L++)
	{
		if (L != 'q' && L != 'e')
		{
			putchar(L);
		}
	}

	putchar('\n');

	return (0);
}
