#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name
 *
 * @name: name of person
 * @f: callback function
 *
 * Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
