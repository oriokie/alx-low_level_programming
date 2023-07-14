#include <stdio.h>
#include <stdlib.h>
/**
 * main - This is the entry point
 * Description: Let's print numbers from 0 to 9
 * Return: 0
 */
int main(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		printf("%d\n", n);
		n++;
	}

	return (0);
}
