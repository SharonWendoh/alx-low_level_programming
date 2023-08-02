#include "main.h"

/**
 * _puts_recursion - Prints string foloowed by anew line
 *
 * @s: pointer to be used
 *
 * Return: no return
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);

	_puts_recursion(s + 1);
}
