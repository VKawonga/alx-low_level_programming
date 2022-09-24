#include "main.h"

/**
 * _islower - prints whether or not a character is lower case or not
 * @c: the character to check
 *
 * Description -_islower prints whether or not a character is lower case or not
 * using islower function
 *
 * Return: On success _islower returns 1 
 * Onerror returns 0
 */
int _islower(int c)
{
	islower(c);
	if ((islower(c)) > '0')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
