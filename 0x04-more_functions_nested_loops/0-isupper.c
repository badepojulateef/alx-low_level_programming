#include "main.h"

/**
 * _isupper - checks for uppercase character
 *@c: string parameter
 * Return: Always 0
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	return (0);
}
