#include <stdio.h>
/**
 * main - prints the alphabets in lowercase apart from q and e
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x == 'q' || x == 'e')
		{
			x++;
		} else
		{
			putchar(x);
			x++;
		}
	}
	putchar('\n');
	return (0);
}
