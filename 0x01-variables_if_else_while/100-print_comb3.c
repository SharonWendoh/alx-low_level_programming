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

	while (x < 10)
	{
		while (y < 10)
		{
			if (y > x)
			{
				putchar(x + '0');
				putchar(y + '0');
				if (x != 8)
				{
				putchar(',');
				putchar(' ');
				}
			}
			y++;
		}
		x++;
		y = 0;
	}
	putchar('\n');
	return (0);
}
