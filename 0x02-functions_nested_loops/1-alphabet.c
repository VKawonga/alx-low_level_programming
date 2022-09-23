#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Description: Prints the alphabet in lower case followed by a new line
 *
 * Return: 0
 */
char print_alphabet(void)
{
	char c = 'a';

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
