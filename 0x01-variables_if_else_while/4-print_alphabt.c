#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Sucess)
*/
int main(void)
{
	char alph, q, e;

	q = 'q';

	e = 'e';

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != e && alph != q)
			putchar(alph);

	}
	putchar('\n');
	return (0);
}

