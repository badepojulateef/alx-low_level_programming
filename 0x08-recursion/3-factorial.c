#include "main.h"

/**
 * factorial - calculate factorialof n.
 * @n: the integer to use.
 * Return: returns int.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
		return (n * factorial(n - 1));
}
