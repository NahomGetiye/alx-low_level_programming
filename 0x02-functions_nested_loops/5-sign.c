#include "main.h"
/**
  * print_sign - prints n if it is greate than 0 and 0 otherwise
  * @n: checkes if it is a symbol or not
  * Return: 1 if n is greater than zero, 0 if it is zero, and -1 otherwise
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
