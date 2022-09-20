#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints all digits
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0
 */
int main(void)

{
	int a = 0;

	while (a < 10)
	{
	printf("%d", a);
	a == a++;
	}
	return (0);
}
