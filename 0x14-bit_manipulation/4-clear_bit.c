#include "main.h"
/**
 * clear_bit - sets value of bit to 0 at a given index
 * @n: num to search
 * @index: position to clear
 *
 * Return: -1 || 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	*n = *n & ~mask;
	return (1);
}
