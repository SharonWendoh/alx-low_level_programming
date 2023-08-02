#include "main.h"

/**
 * _print_rev_recursion - Prints string foloowed by anew line
 *
 * @s: pointer to be used
 *
 * Return: no return
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);

	_putchar(*s);
}
