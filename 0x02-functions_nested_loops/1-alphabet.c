#include "main.h"
/**
  *print_alphabet - print alphabets in lower case
  *Return: returns 0
  */
void print_alphabet(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
