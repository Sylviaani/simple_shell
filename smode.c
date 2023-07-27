#include "main.h"

/**
 * main - Entry poiny
 * @argv: arg vector
 * @argc: arg count
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc > 1)
		run_non_interactive_mode(argc, argv);
	else
		run_interactive_mode(argc, argv);
	return (0);
}
