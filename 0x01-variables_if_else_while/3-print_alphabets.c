#include <stdio.h>
#include <ctype.h>
/**
 * main - alas we start
 *
 * we're printing the alphabet using putchar in lower and upper case letters
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{
	char x = 'a';
	char y = 'A';

	while (x <= 'z')
	{
	putchar (x);
	x++;
	}

	while (y <= 'Z')
	{
	putchar (y);
	y++;
	}

	putchar ('\n');
	return (0);
}

