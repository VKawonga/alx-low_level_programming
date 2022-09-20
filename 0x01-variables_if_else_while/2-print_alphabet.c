#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the alphabet
 *
 * Description: Prints the alphabet using putchar
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
        return (0);
}
