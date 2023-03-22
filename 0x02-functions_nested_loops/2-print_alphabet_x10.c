#include "main.h"

/**
 * print_alphabet_x10 - Make the alphabetx10
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int c;
	int i;
	for (i = 0; i <= 10 ;i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
