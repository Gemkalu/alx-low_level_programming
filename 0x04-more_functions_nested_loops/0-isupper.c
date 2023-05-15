#include <stdio.h>
#include "main.h"

/**
 *  _isupper - to check for uppercase character
 *
 * @c: member to check upper case
 *
 *  Return: 0 or 1
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')

		return (1);

	else
		return (0);
}
