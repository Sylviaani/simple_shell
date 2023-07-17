#include <unistd.h>
#include "main.h"

/**
 * _putchar - always writes out a character.
 * @c: character to be writen
 *
 * Return: void
 */

void _putchar(char c)
{
	write(1, &c, 1);
}
