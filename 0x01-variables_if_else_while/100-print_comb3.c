#include <stdio.h>
/**
 * main - print all single digit numbers of base 10
 *
 * Return: 0
 */
int main(void)
{
	int a;
	int b;

	for (a = '0' ; a < '9'; a++)
	{
		for (b = '0' ; b <= '9'; b++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				putchar(',');

            }
        }
	putchar('\n');
    }
return (0);
}


