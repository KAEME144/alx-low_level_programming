#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the specified character c to atdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno will be set correctly.
 */
int _putchar(char c)
{
	return ( write( 1, &c, 1));
}
