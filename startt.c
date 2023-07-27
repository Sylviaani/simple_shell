#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strtok - program written to understand shell
 * @string: The string
 * @delim: The delimiters
 *
 * Return: A pointer to the next token found in the string,
 * or NULL if no more tokens are found.
 */
char *_strtok(char *string, const char *delim)
{
	static char *n;
	char *start;
	const char *delimiter;

	if (string != NULL)
		n = string;
	if (n == NULL || *n == '\0')
		return (NULL);
	while (*n != '\0' && (*n == ' ' || strchr(delim, *n) != NULL))
	{
		if (*n == ' ')
			n++;
		else
			*n++ = '\0';
	}
	if (*n == '\0')
	{
		n = NULL;
		return (NULL);
	}
	start = n;
	while (*n != '\0')
	{
		delimiter = delim;
		while (*delimiter != '\0')
		{
			if (*n == *delimiter)
			{
				*n = '\0';
				n++;
				return (start);
			}
			delimiter++;
		}
		n++;
	}
	return (start);

}
