#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: is a character
 *decription: this return the lenght of a sting
 * Return: 0
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;

	return (length);

}
