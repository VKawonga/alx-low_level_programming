#include "main.h"

/**
 * _isalpha - prints whether or not a character is alphabetical
 * @c: the character to check
 *
 * Description -_islower checks whether or not a character is alphabetical
 * using isalpha function
 *
 * Return: On success _islower returns 1
 * Onerror returns 0
 */
int _isalpha(int c)
{
	isalpha(c);
	if ((isalpha(c)) > '0')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
