#include "main.h"

/**
 * _isalpha - check if character is an alphabetic character
 *
 * @c: the character we are checking
 *
 * Return: 1 if true, 0 if false
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
