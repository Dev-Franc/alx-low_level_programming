#include"main.h"
#include <stdio.h>

/**
* _isdigit - function to check 0 - 9 for a digit
* @c: checks input of function
* Return: returns 1 if `c` is digit, Returns 0 otherwisw
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	return (1);
	return (0);
}
