#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 *
 * Return: Nothing.
 */
void more_numbers(void)
{
	char i, j;
	int n;

	for (n = 0; n <= 9; n += 1)
	{
		for (i = 0; i <= 14; i += 1)
		{
			j = i;
			if (i > 9)
			{
				_putchar('1');
				j = i % 10;
			}
			_putchar('0' + j);
		}
		_putchar('\n');
	}
}
