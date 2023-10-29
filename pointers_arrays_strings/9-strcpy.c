#include "main.h"
/**
 * *_strcpy - print numbers.
 * @dest: variable
 * @src: variable
 * Description: print with _putchar.
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	char *initial_dest;

	initial_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (initial_dest);
}
