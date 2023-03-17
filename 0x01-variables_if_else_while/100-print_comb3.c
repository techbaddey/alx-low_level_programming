#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 100; i++)
	{
	j = i / 10;
	k = i % 10;
	if (j < k)
	{
	putchar(j + '0');
	putchar(k + '0');
	if (i < 89)
	{
	putchar(44);
	putchar(32);
}
}
	}

	putchar('\n');

	return (0);
}
