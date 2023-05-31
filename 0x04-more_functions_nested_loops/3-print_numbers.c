#include "main.h"
/**
 * print_numbers - a function that prints the numbers from 0 to 9.
 * Return: Success
 */
void print_numbers(void)
{
	int x;

	x = 0;
	while (x < 10)
	{
		_putchar (x + '0');
		x++;
	}
	_putchar('\n');
}
