#include<stdio.h>

/**
 * main - Entry Point
 * Return: 0 (Success)
*/

int main(void)
{
	char a;
	int b;
	long int c;
	float d;

	printf("Size of char: %zu byte(s)\n", sizeof (a));
	printf("Size of int: %zu byte(s)\n", sizeof (b));
	printf("Size of long int: %zu byte(s)\n", sizeof (c));
	printf("Size of float: %zu byte(s)\n", sizeof (d));
	return (0);

}
