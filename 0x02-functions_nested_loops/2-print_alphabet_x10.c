#include "main.h"
/**
 * print_alphabet_x10 - print alphabet x10
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int count;

	char second_letters;

	for (count = 0; count <= 9; count++)
	{
		for (second_letters = 'a'; second_letters <= 'z'; second_letters++)
		{
			_putchar(second_letters);
		}
		_putchar('\n');
	}
}
