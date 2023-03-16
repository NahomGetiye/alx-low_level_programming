#include <stdio.h>
/**
* main - this is a c program to print the size of int and char
* Return: 0 (Success)
*/
int main(void)/*this is the main function*/
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
