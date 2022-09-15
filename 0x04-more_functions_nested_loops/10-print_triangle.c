#include "main.h"
#include <stdio.h>
/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 *
 * Return: Alway 0 (Success)
 */
void print_triangle(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j <= size - i)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
