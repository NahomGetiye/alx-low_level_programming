#include "main.h"
/**
  * print_alphabet_x10 - prints lower case alphabets 10 times
  * Return: returns answer
  */
void print_alphabet_x10(void)
{
int x;
int i;

for (i = 0; i <= 9; i++)
{
for (x = 97; x <= 122; x++)
{
_putchar (x);
}
_putchar ('\n');
}
}
