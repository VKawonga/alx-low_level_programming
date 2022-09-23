#include "main.h"

/**
 * print_alphabet - prints the alphabet 
 *
 * Description: Prints the alphabet in lower case followed by a new line
 *
 * Return: 
 */
int print_alphabet()
{
	int c = 'a';

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return(0);
}
