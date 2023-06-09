#include "main.h"
 /**
 * _strcat - concatenates two strings
 * @dest: input 
 * @src: input 
 *
 * Return: void	
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int a;


	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	a = 0;
	while (src[a] != '\0')
	{
		dest[x] = src[a];
		x++;
		a++;
	}		


	dest[x] = '\0';
	return (dest);
}
