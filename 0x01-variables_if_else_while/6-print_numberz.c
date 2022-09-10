#include <stdio.h>

/**
 * main - prints all single digit numbers of base
 * 10 followed by a new line
 * Return: returns 0 if success
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
