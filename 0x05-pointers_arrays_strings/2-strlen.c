#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - that returns the length of a string.
 *
 * @s: An input string
 * Return: lenght
 */

int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;
	return (length);
}
