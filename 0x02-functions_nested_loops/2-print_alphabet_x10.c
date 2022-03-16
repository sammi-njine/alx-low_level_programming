#include "main.h"

/**
 * print_alphabet_x10 - function that prints alphabet in lowercase
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int x = 0;
	char i;

	while (x++ < 10)
	{
	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
	}
}
