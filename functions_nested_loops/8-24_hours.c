#include "main.h"
/**
 * jack_bauer - print with putchar hours and minutes.
 * Description: print hours and minutes to the standard output.
 * Return: 0
 */
void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			int hour_tens = hours / 10;
			int hour_ones = hours % 10;
			int minute_tens = minutes / 10;
			int minute_ones = minutes % 10;

			_putchar('0' + hour_tens);
			_putchar('0' + hour_ones);
			_putchar(':');
			_putchar('0' + minute_tens);
			_putchar('0' + minute_ones);
			_putchar('\n');
		}
	}
}
