#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - name to print using pointer to function
 * @name: string to add
 * @f: pointer to function
 * Return: 0 (success)
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
