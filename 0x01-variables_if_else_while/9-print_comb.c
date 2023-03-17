#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - Bunch of commas
  * Return: returns zero
  */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar (n);
		if (n != '9')
		{
		putchar (',');
		putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
