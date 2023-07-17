#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int x = 0;
	char hexDigits[] = "0123456789abcdef";

	while (x < 16)
	{
		putchar(hexDigits[x]);
		x++;
	}
	putchar('\n');
	return (0);
}
