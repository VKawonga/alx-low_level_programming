#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the alphabet in reverse
 *
 * Description: Prints the alphabet in reverse using putchar
 *
 * Return: 0
 */
int main(void)

{
	int ch = 'z';

	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
