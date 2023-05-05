#include "main.h"
/**
 * get_endianness - checks if a machine is little or big
 * Return: Returns value of pointer
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
