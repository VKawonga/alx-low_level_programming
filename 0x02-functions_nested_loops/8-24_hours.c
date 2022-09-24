#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Description - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 *
 * Return: 0
 */
char jack_bauer(void)
{
	int i = '0';

	while (i <= '2')
	{
		int j = '0';
		while (j <= '9')
		{
			int k = '0';
			while (k <= '6')
			{
				int l = '0';
				while (l <= '9')
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
					l++;
				}
			}
		}
	}
	return (0);
}
