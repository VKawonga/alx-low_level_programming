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

	while (i <= '9')
	{
		while (j <= '9')
		{
			while (k <= '9')
			{
				while (l <= '9')
				{
					_putchar(l);
					l++;
				}
				_putchar(k);
				k++
			}
	
			_putchar(j);
			j++;
		}
		_putchar(i);
		i++;
	}

	return (0);
}
