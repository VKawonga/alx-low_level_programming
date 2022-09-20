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
		for (ch = 'a' ;  ch <= 'z' ; ch++)
		{
			if (ch != 'q' || ch != 'e')
			{
				putchar(ch);
				break;
			}
		}
	}
	putchar('\n');

	return (0);
}
