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
	int i, j, k, l;

	for (i = '0' ; i < '2' ; i++)
	{
		for (j = '0' ; j <= '9' ; j++)
		{
			for (k = '0' ; k < '6' ; k++)
			{
				for (l = '0' ; l <= '9' ; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
				
			}
		}
	}
	int i, j, k, l;

	for (i = '2' ; i < '3' ; i++)
	{
		for (j = '0' ; j <= 3 ; j++)
		{
			for (k = '0' ; k < '6' ; k++)
			{
				for (l = '0' ; l <= '9' ; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
		}

	}

	return (0);
}
