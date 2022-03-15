#include <stdio.h>

/**
 * main - we start here
 *
 * printing all single digit numbers of base 10 starting from 0
 *
 * Return: zero 0 (success)
 */

int main(void)
{
	char x = '';

	while (x <= 'z')
	{
	putchar(x);
	x++;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
