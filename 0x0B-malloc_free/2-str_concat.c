#include <stdio.h>
#include <stdlib.h>
/**
 * counter - this is a protype
 * @a: string to be counted
 * Return: none
 */
int counter(char *a);
/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: array with the concenatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int size_s1, size_s2, total_size;
	char *arr = NULL;
	int k = 0;

	size_s1 = counter(s1);
	size_s2 = counter(s2);
	total_size = size_s1 + size_s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	arr = malloc(sizeof(char) * (total_size + 1));
	if (arr != NULL)
	{
		while (*s1 != '\0')
		{
			arr[k] = *s1;
			k++;
			s1++;
		}
		while (*s2 != '\0')
		{
			arr[k] = *s2;
			k++;
			s2++;
		}
		arr[k] = '\0';
		return (arr);
	}
	else
	{
		return (NULL);
	}
}
/**
 * counter - functions that counts a string and returns the count of characters
 * @a: the string to be counted
 * Return: the count
 */
int counter(char *a)
{
	int i = 0;
	int count = 0;

	for (; a[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
