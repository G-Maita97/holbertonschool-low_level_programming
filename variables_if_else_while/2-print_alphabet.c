#include <stdio.h>
/**
 * main - print alfabet.
 * Description: print alfabet to the standart output.
 * Return: 0
 */
int main(void)
{
	char L;

	L = 'a';
	for (L = 'a'; L <= 'z'; L++)
	{
		putchar(L);
	}

	putchar('\n');
	return (0);
}

