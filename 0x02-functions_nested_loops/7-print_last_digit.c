#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @a: the integer whose last digit is to be printed
 *
 * Description - prints the last digit of a number.
 *
 * Return: the last digit of an integer.
 */
char print_last_digit(char a)
{
	char mb;

	mb = char (a % 10);
	_putchar(mb);
	return (mb);
}