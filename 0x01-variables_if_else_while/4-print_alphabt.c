#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the alphabet except q and e
 *
 * Description: Prints the alphabet except q
 * and e using putchar
 *
 * Return: 0
 */
int main(void)

{
	int ch = 'a';

	{
		for (ch = 'a' && ch != 'q' || 'e' ;  ch <= 'z' ; ch++)
		{
			putchar(ch);
		}
	}
	putchar('\n');

	return (0);
}
