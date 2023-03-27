#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
void _puts(char *str)
{
int xe0;

	while (*str != '\0')
	{	xe0 = *str++
		_putchar(xe0);
	}
		_putchar('\n');
}
