#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - a function that prints the numbers, 0-9
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		if ((num == '2') || (num == '4'))
		{
			continue;
		{
		else
			_putchar(num);
	}
	_putchar('\n')
}

