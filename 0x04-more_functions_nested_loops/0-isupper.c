#include "main.h"
#include <stdio.h>
/**
 * _isupper - a function that checks for uppercase character
 * @c: character been tested
 * Return: 1 if it is uppercase otherwise 0
 */
int_isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
