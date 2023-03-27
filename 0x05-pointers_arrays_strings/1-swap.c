#include "main.h"
#include <stdio.h>

/**
 * swap_int - that swaps the values of two integers.
 *
 * @a: An integre input pointer
 * @b: An integre input pointer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
