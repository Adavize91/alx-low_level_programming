#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: input string
 *
 * return: length of a string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
