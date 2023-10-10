#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int minutes = 0;
	int hours = 0;

	while (hours < 24)
	{
		while (minutes < 60)
		{
			_putchar((hours < 10 ? '0' : '0' + hours / 10));
			_putchar(('0' + hours % 10));
			_putchar(':');
			_putchar((minutes < 10 ? '0' : '0' + minutes / 10));
			_putchar(('0' + minutes % 10));
			_putchar('\n');
			minutes++;
		}
		hours++;
		minutes = 0;
	}
}
