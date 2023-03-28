#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse
 * @s: variable return
 * Return: nothing
 */

void print_rev(char *s)
{
	for (s -= 1; s != 0; s--)
	{
		s++;
		_putchar(*s);
	}
	_putchar('\n');
}
