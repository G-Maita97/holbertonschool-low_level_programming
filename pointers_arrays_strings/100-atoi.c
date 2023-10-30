#include "main.h"
/**
 * _atoi - print numbers.
 * @s: variable.
 * Description: print with _putchar.
 * Return: 0
 */
int _atoi(char *s)
{
	int result;
	int sign;
	int hasDigit;

	result = 0;
        sign = 1;
        hasDigit = 0;
	while (*s)
	{
		if (*s == '-' && !hasDigit)
		{
			sign = -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			int digit;

			digit = *s - '0';
			if (result > (2147483647 - digit) / 10)
			{
				if (sign == 1)
				{
					return (2147483647);
				}
				else
				{
					return (-2147483648);
				}
			}
			result = result * 10 + digit;
			hasDigit = 1;
		}
		else if (hasDigit)
		{
			break;
		}
		s++;
	}
	return (result * sign);
}

