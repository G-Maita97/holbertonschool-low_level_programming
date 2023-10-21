#include <stdio.h>
/**
 * main - print numers.
 * Description: function (main) for start the program.
 * Return: 0
 */
int main(void)
{
	int N;

	for (N = 0; N <= 9; N++)
	{
		putchar(N + '0');
	}

	putchar('\n');
	return (0);
}
