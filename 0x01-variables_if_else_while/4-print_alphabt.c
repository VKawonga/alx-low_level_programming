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

	if (ch <= 'z' &&  ch != 'q')
	{
		if (ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');

	return (0);
}
