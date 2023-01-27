#include <stdio.h>

/**
 * bmain - function executed beore main
 *
 * Return: no return
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore myi house upon my back!\n");
}
