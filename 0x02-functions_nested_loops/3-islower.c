#include "main.h"

/** _islower - prints whether or not a character is lower case or not
 *
 * Description - _islower prints whether or not a character is lower case or not
 * using islower function
 *
 * Return: 1
 */
int _islower(int c)
{
	unsigned char mb = int c;
	islower(mb);
	return (1); 
}
