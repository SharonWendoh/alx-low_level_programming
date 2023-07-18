#include <stdio.h>
#include "main.h"
/**
 * main - prints alphabet in lowercase
 *
 * Return: Always 0 (Successful)
 */
void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
