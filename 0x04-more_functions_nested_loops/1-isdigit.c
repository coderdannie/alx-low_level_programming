#include "main.h"
#include <stidio>
/**
 * _isdigit - a function that checks for a digit (0 through 9)
 * @c: variable being tested
 * Return: 1 if c is a digit, 0 therwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
