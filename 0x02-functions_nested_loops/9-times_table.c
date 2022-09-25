#include "main.h"

/**
 * times_table -prints the 9 times table
 * Description - prints the 9 times table, starting with 0.
 *
 * Return: 0
 */
int times_table(void)
{
	int i, j;

	for (i = '0' ; i <= '9' ; i++)
	{
		for (j = '0' ; j <= '9' ; j++)
		{
			int a = (i * j);

			_putchar(a + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	return (0);
}
