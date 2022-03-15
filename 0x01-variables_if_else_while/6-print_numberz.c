#include <stdio.h>
/**
 * main - we start here
 *
 * printing all single digit numbers of base 10 starting from 0 using putchar
 *
 * Return: zero 0 (success)
 */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
	putchar ((x % 10) + '0');
	}
	putchar ('\n');
	return (0);
}
