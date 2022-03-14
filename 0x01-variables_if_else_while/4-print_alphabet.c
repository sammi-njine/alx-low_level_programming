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
	char a = 'e';
	char b = 'q';

	if (x <= 'z' && x != a && x != b)
	{
	putchar (x);
	x++;
	}
	else
	{
	putchar ('\n');
	}
	return (0);
}

