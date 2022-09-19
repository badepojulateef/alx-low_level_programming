#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: string to be reversed
 *
 */
void rev_string(char *s)
{
	int l = strlen(s);
	while (l >= 0)
	{
		_putchar(s[l]);
		l--;
	}
}
