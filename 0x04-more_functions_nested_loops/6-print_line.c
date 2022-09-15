#include "main.h"
#include <stdio.h>
/**
 * print_line - a function that draws a straight line in the terminal
 * @n: input number of times to be printed '_'
 * Return: a straight line
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
