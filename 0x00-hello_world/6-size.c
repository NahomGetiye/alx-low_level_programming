#include <stdio.h>
/**
* main - this is a c program to print the size of int and char
* Return: 0 (Success)
*/
int main(void)/*this is the main function*/
{
printf("Size of char: %d byte(s)", sizeof(char));
printf("Size of int: %d byte(s)", sizeof(int));
printf("Size of a long int: %d byte(s)", sizeof(long int));
printf("Size of a long long int: %d byte(s)", sizeof(long long int));
printf("Size of float: %d byte(s)", sizeof(float));
return (0);
}
