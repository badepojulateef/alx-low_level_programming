#include "main.h"

/**
 * swap_int - swaps two int
 * @a: first int parameter
 * @b: second int parameter
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
