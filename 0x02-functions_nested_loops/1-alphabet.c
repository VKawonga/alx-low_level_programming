#include "main.h"

/**
 * print_alphabet - prints the alphabet 
 *
 * Description: Prints the alphabet in lower case followed by a new line
 *
 * Return: 
 */
char print_alphabet();
{
	char c = 'a';

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return ;
}
