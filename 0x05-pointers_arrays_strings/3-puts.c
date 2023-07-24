#include "main.h"
/**
 * _puts - prints a string, folleed by a new line, to stdout
 * @str: string to pring
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

