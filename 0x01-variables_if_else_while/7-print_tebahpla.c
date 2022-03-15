#include <stdio.h>
/**
 * main - alas we start
 *
 * we're printing the alphabet in reverse using putchar
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
	putchar (x);
	--x;
	}
	putchar ('\n');
	return (0);
}

