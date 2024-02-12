#include "main.h"

/**
 * flip_bits - func to flip bits
 * @n: 1st number.
 * @m: 2nd number.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbr_bits;

	for (nbr_bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
		nbr_bits++;
	}

	return (nbr_bits);
}
