#include "main.h"

/**
 * print_most_numbers - prints the numbers 0 to 9 except 2 and 4.
 *
 * Return: Nothing.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i += 1)
	{
		if (i == 50 || i == 52)
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
