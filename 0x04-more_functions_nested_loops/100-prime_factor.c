#include <stdio.h>
/**
* main - prints the largest prime factor of a number
* Return: Always zero
*/
int main(void)
{
	long int n, pf;

	n = 612852475143;

	for (pf = 2; pf <= n; pf++)
	{
		if (n % pf == 0)
		{
			n /= pf;
			pf--;
		}
	}
	printf("%ld\n", pf);
	return (0);
}
