#include "main.h"
/**
  * print_last_digit - prints the last digit
  * @n: The integer to compute the last digit calculator
  * Return: The last digit of n
  */
int print_last_digit(int n)
{
int j;

j = n % 10;
if (j < 0)
{
j = j * -1;
}
_putchar(j + '0');
return (j);
}
