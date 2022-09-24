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
	int j = '0';
	int k = '0';
	int l = '0';

	for ( ; i <= '2' ; i++)
	{
		for ( ; j <= '9' ; j++)
		{
			for ( ; k <= '6' ; k++)
			{
				for ( ; l <= '9' ; l++)
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
