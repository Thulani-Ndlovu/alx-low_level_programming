#include "main.h"

/**
* jack_bauer - prints every minute of the day of Jack Bauer
*/

void jack_bauer(void)
{
	int hr;
	int min;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			if (hr < 10)
			{
				_putchar('0');
				_putchar(hr + '0');
			}
			else if (hr >= 10)
			{
				_putchar((hr / 10) + '0');
				_putchar((hr % 10) + '0');
			}
			if (min < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(min + '0');
			}
			else if (min >= 10)
			{
				_putchar(':');
				_putchar((min / 10) + '0');
				_putchar((min % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
