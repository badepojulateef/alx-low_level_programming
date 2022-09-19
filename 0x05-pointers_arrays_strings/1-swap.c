#include "main.h"

/**
 * 1-swap - swaps two int
 * @a: first int parameter
 * @b: second int parameter
 * Return: void
 */

void(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
