#include <stdio.h>

/**
* main - Print the numbers of base 16 in lowercase
* Return: Always 0 (Success)
*/
int main(void)
{
		char hex;

		for (hex = '0x0'; hex <= '0x16'; hex++)
		putchar(hex);

		putchar('\n');

	return (0);
}
