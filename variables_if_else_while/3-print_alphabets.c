#include <stdio.h>
/**
 * function (main) for start the program
 * Description: using if else while
 * Return = 0
 */
int main (void)
{
	char L;
	L ='a';
	
	while (L <= 'z')
	{
		putchar(L);
		L++;
	}
	
	L ='A';

	while (L <= 'Z')
	{
		putchar(L);
		L++;
	}
	putchar('\n');
	return (0);
}
