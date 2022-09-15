#include "main.h"
#include <stdio.h>
/**
 * print_line - a function that draws a straight line in the terminal
 * @n: input being tested
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i;

	if (i <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
