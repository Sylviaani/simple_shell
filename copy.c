#include "main.h"
#include <string.h>

/**
 * _strcpy - function that copies a string.
 * @destination: points to the destination
 * @strings: points to a string
 * Return: Pointer
 */
char *_strcpy(char *destination, const char *strings)
{
	char *s = destination;

	while (*strings != '\0')
	{
		*destination++ = *strings++;
	}
	return (s);
}
