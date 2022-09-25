#include "main.h"

/**
 * times_table -prints the 9 times table
 * Description - prints the 9 times table, starting with 0.
 *
 * Return: 0
 */
char times_table(void)
{
	char i, j;

	for (i = '0' ; i < '10' ; ++i)
	{
		for (j = '0' ; j <= '9' ; j++)
		{
			char a = i * j;

			_putchar(a);
			_putchar(',');
		}
		_putchar('\n');
	}
	return (0);
