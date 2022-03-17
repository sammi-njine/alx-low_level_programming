#include "main.h"

/**
 * print_sign - function prototype
 *
 * @n: number whose sign is being checked
 *
 * Return: 1 if > than 0 and print +, 0 if 0 and print 0, -1 if < and print -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
