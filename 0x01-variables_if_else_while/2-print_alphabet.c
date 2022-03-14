#include <stdio.h>
/**
 * main - alas we start
 *
 * we're printing the alphabet using putchar
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
	putchar (x);
	x++;
	}
	putchar ('\n');
	return (0);
}

