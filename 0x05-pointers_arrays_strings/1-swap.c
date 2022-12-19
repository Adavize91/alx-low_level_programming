#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @n: integer of the first value
 * @n: integer of the second value
 *
 * Return: no return
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
