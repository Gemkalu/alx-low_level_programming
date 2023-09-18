#include <stdio.h>
#include "calc.h"

/**
 * add - This Function adds two parameters
 * @a: first parameter value
 * @b: second parameter value
 * Return: gives 1 or 0
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - This subtracts two parameters
 * @a: first parameter value
 * @b: second parameter value
 * Return: gives 1 or 0
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - This multiplies two parameters
 * @a: first parameter value
 * @b: second parameter value
 * Return: gives 1 or 0
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div -This  calculates the quotient of two parameters
 * @a: first parameter value
 * @b: second parameter value
 * Return: gives 1 or 0
 */
int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - This calculates the modulus of two parameters
 * @a: first parameter value
 * @b: second parameter value
 * Return: gives 1 or 0
 */
int mod(int a, int b)
{
	return (a % b);
}
