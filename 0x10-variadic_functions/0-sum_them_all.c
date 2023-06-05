#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - This function returns the sum of all its paramters.
 * @n: The number of paramters passed into the function.
 * @...: ellipes A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list log;
	unsigned int z, sum = 0;

	va_start(log, n);

	for (z = 0; z < n; z++)
		sum += va_arg(log, int);

	va_end(log);

	return (sum);
}

