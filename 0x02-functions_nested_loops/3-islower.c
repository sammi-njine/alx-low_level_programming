#include "main.h"

/**
 * _islower - check if character is lowercase
 *
 * @c: the character we are checking
 *
 * Return: 1 if true, 0 if false
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
