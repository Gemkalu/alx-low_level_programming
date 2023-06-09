#include "main.h"
/**
 * _memset - fill memory with specific value
 * @s: starts address of memory to be filled
 * @b: value
 * @n: number of bytes
 *
 * Return: changes array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int z = 0;


	for (; n > 0; z++)
	{
		s[z] = b;
		n--;
	}
	return (s);
}

