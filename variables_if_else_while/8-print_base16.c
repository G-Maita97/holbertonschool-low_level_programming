#include <stdio.h>

/**
 * main - print numers.
 * Description: function (main) for start the program.
 * Return: 0
 */
int main(void)
{
	int H;

	for (H = 0; H <= 15; H++)
	{
		char NHx = (H < 10) ? (H + '0') : (H - 10 + 'a');

		putchar(NHx);
	}

	putchar('\n');

	return (0);
}
