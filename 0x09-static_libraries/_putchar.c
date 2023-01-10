#include <unistd.h>
/**
 * _putchar -write the character c to stdout
 * @c: the character to print
 *
 * Return: on success i.
 * on error, -1 is returned and is set appropriately.
 */

int _putchar (char c)
{
 return(write(1, &c, 1));

}
