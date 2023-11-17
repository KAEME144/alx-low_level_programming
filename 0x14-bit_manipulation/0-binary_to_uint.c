#include "main.h"

/**
 * binary_to unit - changes a binary number to an
 * unsigned int.
 * @b: is binary.
 *
 * Return: an unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int nu;
	int x;

	nu = 0;

	if (!b)
		return (0);

	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
		return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		nu <<= 1;
		if (b[x] == '1')
			nu += 1;
	}
	return (nu);
}
