#include "main.h"
/**
 * get_endianness - check endianness
 *
 * Return: 0 || 1
 */
int get_endianness(void)
{
	int n = 1;
	char *ptr = (char *) &n;

	return (*ptr == 1);
}
