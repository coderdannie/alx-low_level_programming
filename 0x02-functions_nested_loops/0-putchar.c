#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On sucess 1.
 * On error, -1 is returned, and erno is set appropriately.
 */
int_putchar(char c)
{
	char *ch = "_putchar";

	while (*ch)
	{
		_putchar(*ch);
		sh++;
	}
	_putchar('\n');
	return (0);
{
