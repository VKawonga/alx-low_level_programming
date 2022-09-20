#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints all numbers in base 16
 *
 * Description: prints all the numbers of base 16 in lowercase, 
 * ifollowed by a new line.
 *
 * Return: 0
 */
int main(void)

{
	int ch = '0';
	int mb = 'a';

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);
	}

	for (mb = 'a' ; mb <= 'f' ; mb++)
	{
		putchar(mb);
	}

	putchar('\n');

	return (0);
}
