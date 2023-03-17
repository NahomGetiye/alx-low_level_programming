#include <stdio.h>
/**
  * main - Hexadecimal project
  * Return: returns zero
  */
int main(void)
{
	int n = 48;
	int m = 97;

	while (n <= 57)
	{
		putchar (n);
		n++;
	}
	while (m <= 102)
	{
		putchar (m);
		m++;
	}
	putchar ('\n');
	return (0);
}
