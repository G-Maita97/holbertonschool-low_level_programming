#include "main.h"
/**
 * _puts - pointers int
 * @*s: pointer value
 * @s: varible char
 * Description: print txt
 * return: 0
 */
void _puts(char *s)
{
	int n;

	n = 0;
	for (n = 0; s[n] != '\0'; n++)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
