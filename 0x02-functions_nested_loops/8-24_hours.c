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

	while (i <= '2')
	{
		while (j <= '9')
		{
			while (k <= '6')
			{
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
				_putchar(i);
				_putchar(j);
				_putchar(':');
				_putchar(k);
				_putchar(l);
				_putchar('\n');
				k++;
			}
			_putchar(i);
			_putchar(j);
			_putchar(':');
			_putchar(k);
			_putchar(l);
			_putchar('\n');
			j++;
		}
		_putchar(i);
		_putchar(j);
		_putchar(':');
		_putchar(k);
		_putchar(l);
		_putchar('\n');
		i++;
	}
	return (0);
}
