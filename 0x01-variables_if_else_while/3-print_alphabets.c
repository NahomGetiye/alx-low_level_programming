#include <stdio.h>
/**
  * main - contains the alphabets
  * Return: returns 0 finally
  */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar (n);
		n++;
	}
	while (m <= 90)
	{
		putchar (m);
		m++;
	}
	putchar ('\n');

	return (0);
}
