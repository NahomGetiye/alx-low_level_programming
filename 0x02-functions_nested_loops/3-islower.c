#include "main.h"
/**
  * _islower - checks if the input is in lowercase
  * Return: 1 if c is lowercase, 0 otherwise
  * @c : Integer value of character to check
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
