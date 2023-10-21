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
	while (L <= 'z')
	{
		putchar(L);
		L++;
	}
	L = 'A';
	while (L <= 'Z')
	{
		putchar(L);
		L++;
	}
	putchar('\n');
	return (0);
}
