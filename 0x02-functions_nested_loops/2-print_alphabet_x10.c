#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times
 *
 * Return: Always 0 (Successful)
 */
void print_alphabet_x10(void)
{
	int y = 0;

	while (y <= 9)
	{
		char x = 'a';

		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		y++;
		_putchar('\n');
	}
}
