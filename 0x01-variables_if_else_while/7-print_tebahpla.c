#include <stdio.h>
/**
  * main - reverse alphabet
  * Return: returns zero
  */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar (n);
		n--;
	}
	putchar ('\n');
	return (0);
}
