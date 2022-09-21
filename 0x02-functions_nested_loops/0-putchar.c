#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints _putchar
 *
 * Description: Prints _putchar using putchar
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

	putchar('\n');

	return (0);
}
