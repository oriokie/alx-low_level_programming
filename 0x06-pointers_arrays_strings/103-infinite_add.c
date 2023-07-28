#include "main.h"
/**
* rev_string - reverses a string or array
* @n: number of characters of an array or string
*/
void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (n[i] != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i, j++, i--)
	{
		temp = n[j];
		n[j] = n[i];
		n[i] = temp;
	}
}
/**
* infinite_add - function that adds 2 numbers together
* @n1: 1st number to add
* @n2: second number to add
* @r: buffer
* @size_r: buffer size
* Return: pointer to calling function
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, digits = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	i--;
	j--;

	if (j >= size_r || i >= sizer_r)
		return ((void *)0);

	while (i >= 0 || j >= 0 || overflow)
	{
		int val1 = (i >= 0) ? n1[i] - '0' : 0;
		int val2 = (j >= 0) ? n2[j] - '0' : 0;
		int temp_tot = val1 + val2 + overflow;

		if (temp_tot >= 10)
		{
			overflow = 1;
		}
		else
		{
			overflow = 0;
		}

		if (digits >= size_r - 1)
			return ((void *)0);
		r[digits] = (temp_tot % 10) + '0';
		digits++;
		j--;
		i--;
	}

	r[digits] = '\0';
	rev_string(r);
	return (r);
}
