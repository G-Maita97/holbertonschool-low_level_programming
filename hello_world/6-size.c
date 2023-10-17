#include <stdio.h>

/**
 * main - print using printf funtion
 * Description: Resolve task#5 Holberton
 * Return: 0
 */

int main(void)
{
	char letra;
	int numero;
	long int long_int;
	long long int long_long_int;
	float decimal;

	printf("Size of a char: %ld byte(s)\n", sizeof(letra));
	printf("Size of an int: %ld byte(s)\n", sizeof(numero));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long_int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long_long_int));
	printf("Size of a float: %ld byte(s)\n", sizeof(decimal));
	return (0);
}
