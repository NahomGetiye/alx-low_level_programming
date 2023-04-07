#include "main.h"
/**
  * _isalpha - check if the input is an alphabet or not
  * @c: Integer value to check whether it is an alphabet or not
  * Return: return 1 if it is alphabet, 0 otherwise
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
