#include <stdio.h>

/**
 * main - prtints all single digits of base
 * 10 starting from 0, followed by new line
 * Return: return 0 if success
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
