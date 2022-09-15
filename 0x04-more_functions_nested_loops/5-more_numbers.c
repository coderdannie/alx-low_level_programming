#include "main.h"
#include <stdio.h>
/**
 * more_numbers - a function that prints 10 times the numbers, from 0-14
 *_putchar only 3 times
 * Return: 0-14 x10 followe by new line
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
