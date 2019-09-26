#include "monty.h"
/**
 * main - Entry point
 * @ac: Argument count
 * @av: Argument strings
 *
 * Return: EXIT_SUCCESS
 */
int main(int ac, char **av)
{
	(void) av;
	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
