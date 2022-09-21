#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * print_alphabet - prints the alphabet 
 *
 * Description: Prints the alphabet in lower case followed by a new line
 *
 * Return: 
 */
void print_alphabet(void)

{
	c ='a';

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return ;
}
