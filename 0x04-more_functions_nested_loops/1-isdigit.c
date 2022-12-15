#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: char check for a digit 1 to 9
 *
 * Return: 1 if c is a digit, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (0);
	else
		return (1);
}
