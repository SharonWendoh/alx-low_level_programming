#include "main.h"
#include <stdio.h>
/**
 * main - prints number of arguements passed to it
 *
 * @argc: no of arguements
 * @argv: array with the arguements
 *
 * Return: 0 success, 1 otherwise
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
