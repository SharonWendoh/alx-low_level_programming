#include <string.h>
/**
 * is_palindrome_recursive - Checks whether a string is a palindrome
 *
 * @x: start index
 * @y: end index
 *
 * Return: 1 if palindrome 0 otherwise
 */
int is_palindrome_recursive(char *x, char *y)
{
	if (x >= y)
	{
		return (1);
	} else if (*x != *y)
	{
		return (0);
	}
	return (is_palindrome_recursive(x + 1, y - 1));
}
/**
 * is_palindrome - Checks whether a number is a palindrome
 *
 * @s: input pointer location
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length == 0)
	{
		return (1);
	}
	return (is_palindrome_recursive(s, s + length - 1));
}
