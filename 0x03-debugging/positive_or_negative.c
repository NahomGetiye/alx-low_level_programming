#include "main.h"
#include <stdio.h>

/**
  * positive_or_negative - check if the number is postive or negative
  * Return: 0
  * @i: The integer value to check the number
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}
