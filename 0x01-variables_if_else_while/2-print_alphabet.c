#include <stdio.h>

/**
 * main - prints th letter in lowercase,
 * followed by a new line
 * Return: return 0 if success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);

}
