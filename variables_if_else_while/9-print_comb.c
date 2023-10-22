#include <stdio.h>
/**
 * main - print alfabet.
 * Description: print alfabet to the standart output.
 * Return: 0
 */
int main(void)
{
	int Number;

	for (Number = 0; Number <= 9; Number++)
	{
		putchar(Number + '0');
		if (Number <= 8)
		{
			putchar(',');
			putchar(' ');
		}

	}

	putchar('\n');
	return (0);
}
