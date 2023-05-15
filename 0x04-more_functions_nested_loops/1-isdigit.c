#include "main.h"

/**
 * _isdigit - checks if 0 through 9 is a digit
 *
 * @c: check if c is a digit
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}