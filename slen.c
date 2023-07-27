#include "main.h"

/**
 * _strlen - program to get the length of a string
 * @s: string
 * Return: returns the lenght of the string
 */
int _strlen(char *s)
{
	int index;
	int length = 0;

	for (index = 0; s[index] != '\0'; ++index)
	{
		length++;
	}
	return (length);
}
