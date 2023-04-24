#include "main.h"

/**
 * main - function that draws a diagonal line on the terminal.
 *
 * @n: integer
 * Return: Nothing.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		i = 0;
		while (i <= n)
		{
			for (j = 0; j < i; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
