#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;

	for (num <= 9)
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}

