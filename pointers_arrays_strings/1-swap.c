#include "main.h"
/**
 * swap_int - pointers int
 * @*a: pointer value
 * @*b: varible entera
 * @a: variable
 * @b:varibale
 * Description: swap int
 * return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
