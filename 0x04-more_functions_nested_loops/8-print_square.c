#include "main.h"
#include <stdio.h>
/**
 * print_square - a function that prints a square, followed by a new line
 * @size: size of both width and length
 * Retun: # to print the square
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= size; i++)
		{
			_putchar('#');
			for (j = 2; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
