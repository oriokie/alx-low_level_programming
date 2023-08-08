#include "main.h"
#include <stdlib.h>

int calculate_total_length(int ac, char **av)
{
	int size = 0;
	for (int i = 0; i < ac; i++)
	{
		int j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++; // For newline character
	}
	return size;
}

char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return NULL;

	int size = calculate_total_length(ac, av);
	char *arg = (char *)malloc(sizeof(char) * (size + 1)); // +1 for null terminator
	if (arg == NULL)
		return NULL;

	int k = 0;
	for (int i = 0; i < ac; i++)
	{
		for (int j = 0; av[i][j]; j++)
		{
			arg[k] = av[i][j];
			k++;
		}
		arg[k] = '\n';
		k++;
	}
	arg[size] = '\0';

	return arg;
}

