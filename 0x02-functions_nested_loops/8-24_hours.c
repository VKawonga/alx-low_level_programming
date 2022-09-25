#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Description - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
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
	int a, b, c, d; 
	for (a = '2' ; a <= '2' ; a++)
	{
		for (b = '0' ; b <= 3 ; b++)
		{
			for (c = '0' ; c < '6' ; c++)
			{
				for (d = '0' ; d <= '9' ; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
		}
	}
	return (0);
}
