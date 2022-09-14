#include "main.h"

/**
 * times_table - prints the times table of an integer starting with  zero
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i, y, mul;

	for (i = 0; i <= 9; i++)
	{
		for (y = 0; y <= 9; y++)
		{

			mul = i * y;
			if (y != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (y == 0)
			{
				_putchar('0');
			}
			else if (mul >= 10)
			{
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
			else if ((mul < 10) && (y != 0))
			{
				_putchar(' ');
				_putchar((mul % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
