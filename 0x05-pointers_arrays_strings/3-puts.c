#include "main.h"
/**
 * _puts - print a string to standard output
 * @str: is the string
 * Return: 0
 */

void _puts(char *str);
{

	while (*str)
	{
		_putchar('*str');
		       (*str++);
	}
	_putchar('\n');
}
