/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 *
 * Return: no return.
 */
void print_rev(char *s)
{
	int counts = 0;

	while (counts >= 0)
	{
		if (s[counts] == '\0')
			break;
		counts++;
	}

	for (counts--; counts >= 0; counts--)
		_putchar(s[counts]);
	_putchar('\n');
}


