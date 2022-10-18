#include "main.h"

/**
 * jack_bauer - prints all the minutes in 24 hours.
 */
void jack_bauer(void)
{
	int min1;
	int min2;
	int hr1;
	int hr2;

	for (hr2 = '0'; hr2 <= '2'; hr2++)
	{
		for (hr1 = '0'; hr1 <= '9'; hr1++)
		{
			for (min2 = '0'; min2 <= '5'; min2++)
			{
				for (min1 = '0'; min1 <= '9'; min1++)
				{
					if (hr2 == '2' && hr1 > '3')
					{
						break;
					}
					else
					{
						_putchar(hr2);
						_putchar(hr1);
						_putchar(':');
						_putchar(min2);
						_putchar(min1);
						_putchar('\n');
					}
				}
			}
		}
	}
}
