#include "main.h"
/**
  * swap_int - swaps numbers
  * Return: Always 0
  * @a: Integer value for pointer a
  * @b: Integer value for pointer b
  */
void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
