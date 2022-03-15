#include <stdio.h>

/**
 * main - starts here
 *
 * printing out all base 16 no.s in lowercase using putchar
 *
 * Return: zero 0 (success)
 *
 */

int main(void)
{
	int x;
	char y;

	for (x = 0; x <= 9; x++)
		putchar ((x % 10) + '0');
	for (y = 'a'; y <= 'f'; y++)
		putchar (y);

	putchar('\n');

	return (0);
}
