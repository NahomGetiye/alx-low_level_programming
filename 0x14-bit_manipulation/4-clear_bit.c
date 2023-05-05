#include "main.h"
/**
 * clear_bit - clears teh bit
 * @n: pointer of number
 * @index: index of the bit
 * Return: Return a value
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
