#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * count_words - Count the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(const char *str)
{
	int flag = 0;
	int words = 0;
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		if (str[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			words++;
		}
	}

	return (words);
}

/**
 * allocate_matrix - Allocate memory for the matrix of words.
 * @words: Number of words.
 *
 * Return: The allocated matrix.
 */
char **allocate_matrix(int words)
{
	char **matrix = (char **)malloc(sizeof(char *) * (words + 1));

	return (matrix);
}

/**
 * populate_matrix - Populate the matrix with words.
 * @matrix: The matrix to populate.
 * @str: The input string.
 * @len: Length of the string.
 */
void populate_matrix(char **matrix, char *str, int len)
{
	int i, k = 0, c = 0, start = 0, end;

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;

				char *tmp = (char *)malloc(sizeof(char) * (c + 1));

				if (tmp != NULL)
				{
					strncpy(tmp, str + start, c);
					tmp[c] = '\0';
					matrix[k] = tmp;
					k++;
				}
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;
}

/**
 * strtow - Split a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (Success),
 *         or NULL (Error).
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);

	int len = strlen(str);

	int words = count_words(str);

	if (words == 0)
	{
		return (NULL);
	}

	char **matrix = allocate_matrix(words);

	if (matrix == NULL)
	{
		return (NULL);
	}

	populate_matrix(matrix, str, len);

	return (matrix);
}
