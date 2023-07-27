#include "main.h"
#include <string.h>

/**
 * _strcmp - compared strings
 * @g1: arguments one
 * @g2: arguments two
 * Return: greater, less or sero based on input
 */
int _strcmp(char *g1, char *g2)
{
	while (*g1 == *g2)
	{
		if (*g1 == '\0')
		{
			return (0);
		}
		g1++;
		g2++;
	}
	return (*g1 - *g2);
}
