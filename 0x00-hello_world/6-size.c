#include <stdio.h>
/**
 * This program prints out the sizes of the avrious data types in C
 */
int main (void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of a int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
