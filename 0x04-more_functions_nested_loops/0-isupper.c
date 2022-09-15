#include "main.h"
#include <stdio.h>

/**
 * _isupper - a function that checks for uppercase character
 * @c: character being tested
 * Return: 1 if c is uppercase, 0 therwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
