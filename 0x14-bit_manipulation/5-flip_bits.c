#include "main.h"
/**
 * flip_bits - returns number of bits required
 * to flip from a num to another
 * @n: 1st argument
 * @m: 2nd argument
 *
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int delta = n ^ m;
	unsigned int count = 0;

	while (delta != 0)
	{
		count += delta & 1;
		delta >>= 1;
	}

	return (count);
}
