#include "main.h"
#include <stdio.h>

/**
 * _abs - value absolute
 *
 *@n: arguent for the function
 *
 * Return: 0
 */

int _abs(int n)
{
	if (n > 0 || n == 0)
	{
	return (n);
	}
	else
	return (n * -1);
}
