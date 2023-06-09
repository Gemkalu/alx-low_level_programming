#include "main.h"
/**
 * _strncat - Functions that links two strings
 * using at most n bytes from src
 * @dest: input val
 * @src: input val
 * @n: input val
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int a;


	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	a = 0;
	while (a < n && src[a] != '\0')
	{
	dest[x] = src[a];
	x++;
	a++;
	}
	dest[x] = '\0';
	return (dest);
}

