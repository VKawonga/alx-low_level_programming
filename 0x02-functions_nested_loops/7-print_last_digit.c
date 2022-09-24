#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @a: the integer whose last digit is to be printed
 *
 * Description - prints the last digit of a number.
 *
 * Return: the last digit of an integer.
 */
int print_last_digit(int a)
{
	char mb;

	mb = a % 10;
	putchar(mb);
	return (mb);
}
