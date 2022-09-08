#include <stdio.h>

/**
 * main - Print the size of multiple var types
 *
 * Return Always (success)
 */

int main(void){
	char a;
	int n;
	long int e;
	long long int l;
	float c;

	printf("The size of a char: %d byte(s)\n", sizeof(a));
	printf("The size of a int: %d byte(s)\n", sizeof(a));
	printf("The size of a long int: %d byte(s)\n", sizeof(e));
	printf("The size of a long long int: %d byte(s)\n", sizeof(l));
	printf("The size of a float: %d byte(s)\n", sizeof(c));
	return(0)
}

