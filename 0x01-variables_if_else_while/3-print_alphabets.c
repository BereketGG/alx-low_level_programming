#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return (0)
 */

int main(void)
{
	char l = 'a';
	char u = 'A';

	for (l < 'z')
	{
		putchar(l);
		l++;
	}
	for (u < 'Z')
	{
		putchar(u);
		u++
	}
	putchar('\n');
	return (0);
}
