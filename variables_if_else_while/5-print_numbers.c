#include <stdio.h>
/**
 * main - print numers.
 * Description: function (main) for start the program.
 * Return: 0
 */
int main(void)
{
	int N;

	N = 0;
	while (N <= 9)
	{
		printf("%i", N);
		N++;
	}
	printf("\n");
	return (0);
}
