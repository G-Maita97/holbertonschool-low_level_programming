#include <stdio.h>
/**
 * main - print alfabet.
 * Description: print alfabet to the standart output.
 * Return: 0
 */
int main(void)
{
	char L;

	 L = 'z';
	 for (L = 'z'; L >= 'a'; L--)
	{
		putchar(L);
	}

	putchar('\n');
	return (0);
}
