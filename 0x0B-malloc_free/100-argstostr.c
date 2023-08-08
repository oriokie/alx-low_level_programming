#include "main.h"
#include <stdlib.h>
/**
 * calculate_total_length - functions that calculates the total lenght of the
 * arguments
 * @ac: the count of arguments
 * @av: the pointer to the array
 * Return: size
 */
int calculate_total_length(int ac, char **av)
{
	int size = 0;
	int i;

	for (i = 0; i < ac; i++)
	{
		int j = 0;

		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
	}
	return (size);
}
/**
 * argstostr - functions that conatenates all the arguments of my program
 * @ac: count of arguments
 * @av: pointer to the size of the array
 * Return: pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	int size, k = 0, i, j;
	char *arg;

	if (ac == 0 || av == NULL)
		return (NULL);

	size = calculate_total_length(ac, av);

	arg = malloc((sizeof(char) * size) + 1);

	if (arg == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			arg[k] = av[i][j];
			k++;
		}
		arg[k] = '\n';
		k++;
	}
	arg[size] = '\0';

	return (arg);
}

