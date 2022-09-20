#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the alphabet twice
 *
 * Description: Prints the alphabet in lower and
 * uppercase using putchar
 *
 * Return: 0
 */
int main(void)

{
	int ch = 'a';

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}

	int mb = 'A';

	for (mb = 'A' ; mb <= 'Z' ; mb++)
	{
		putchar(mb);
	}

	putchar('\n');

	return (0);
}
