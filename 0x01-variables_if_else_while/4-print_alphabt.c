#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - return alphabet both except e and q
 *
 * Return: 0 (Sucess)
 */
int main(void)
{
	int i;
	
	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)	
		{
			putchar(i);
		}	
	}
	putchar('\n');
	return (0);
}
