#include"main.h"

/**
 * _isupper - function to check if character is uppercase
 * @c: checks input of function
 * Return: returns 1 if `c` is uppercase, Returns 0 otherwise 
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
