#include "main.h"

/**
 * binary_to_uint - converts a binary number to U int
 * @b: char binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int len, b2;

	if (!b)
	return (0);

	i = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, b2 = 1; len >= 0; len--, b2 *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			i += b2;
		}
	}

	return (i);
}
