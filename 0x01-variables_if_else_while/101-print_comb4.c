#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int x = 0;
	int y = 0;
	int z = 0;

	while (x < 10)
	{
		while (y < 10)
		{
			while (z < 10)
			{
				if (z > y && y > x)
				{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');
				if (x != 7)
				{
				putchar(',');
				putchar(' ');
				}
				}
				z++;
			}
			y++;
			z = 0;
		}
		x++;
		y = 0;
	}
	putchar('\n');
	return (0);
}
