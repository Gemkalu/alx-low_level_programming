#include "main.h"

/**
 * print_numbers - print 0-9
 * return: void
 */

void print_numbers(void)
{
	int i
	char c;

	for (i = 0; i <= 9; i++)
	{
		c = '0' + i
		_putchar(c);
	}
	_putchar('\n');
}
