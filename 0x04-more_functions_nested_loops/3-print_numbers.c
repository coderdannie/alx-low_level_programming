#include "main.h"
#include <stdio.h>
/**
 * print_numbers - a function that prints the numbers, from 0-9
 * Return: 0-9 followed by a new line
 */
void print_numbers(void)
{
	char i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
