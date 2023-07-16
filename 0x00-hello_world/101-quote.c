#include <unistd.h>
/**
 * main - prints without printf or puts
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, str, 59);
	return (1);
}
