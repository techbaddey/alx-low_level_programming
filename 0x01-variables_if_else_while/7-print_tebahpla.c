#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet = 'a';

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
	putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
