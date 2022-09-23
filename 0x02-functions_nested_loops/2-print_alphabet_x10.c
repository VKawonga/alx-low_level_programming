#include "main.h"

/** print_alphabet_x10 prints the alphabet 10 times
 *
 * Description - print_alphabet_x10 prints the alphabet 10 times in lower case 
 *
 * Return: 0
 */
char print_alphabet_x10(void)
{
	int mb = '0';
	char c = 'a';

	for (mb = '0' ; mb <= '9' ; mb++)
	{
		for (c = 'a' ; c <= 'z' ; c++)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
	return (0);
}
