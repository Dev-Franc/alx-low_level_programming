#include <stdio.h>

/**
 * main - Size of multiple var types
 *
 * Return Always 0 (success)
 */

int main(void)
{
	char a;
	int n;
	long int e;
	long long int l;
	float c;

	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of a int: %d byte(s)\n", sizeof(n));
	printf("Size of a long int: %d byte(s)\n", sizeof(e));
	printf("Size of a long long int: %d byte(s)\n", sizeof(l));
	printf("Size of a float: %d byte(s)\n", sizeof(c));
	return (0);
}

