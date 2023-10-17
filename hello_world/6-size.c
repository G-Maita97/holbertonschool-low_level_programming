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
	
	printf("Size of a char: %ld ", sizeof(letra)); printf("byte(s)\n");
	printf("Size of an int: %ld ", sizeof(numero)); printf("byte(s)\n");
	printf("Size of a long int: %ld ", sizeof(long_int)); printf("byte(s)\n");
	printf("Size of a long long int: %ld ", sizeof(long_long_int)); printf("byte(s)\n");
	printf("Size of a float: %ld ", sizeof(decimal)); printf("byte(s)\n");
	return(0);
}
