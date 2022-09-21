#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the digits
 *
 * Description: prints all single digit numbers of base 10 starting from 0,
 * separated by commas followed by a new line using putchar
 *
 * Return: 0
 */
int main(void)

{
	int ch = '0';

	while (ch < '9')
	{
		putchar(ch);
		putchar(',');
		putchar(' ');
		ch++;
	}

	putchar('9');
	return (0);
}
