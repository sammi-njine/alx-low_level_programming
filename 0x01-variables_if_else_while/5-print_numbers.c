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
	int x = 0;

	while (x <= 9)
	{
	printf("%d", x);
	x++;
	}
	printf("\n");
	return (0);
}
