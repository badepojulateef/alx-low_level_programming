#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse
 * followed by a new line
 * Return: return 0 if success
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
