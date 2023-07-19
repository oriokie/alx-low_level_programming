#include <stdio.h>

/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return:  (Success)
 */

int main(void)
{
	unsigned long int i;
	unsigned long int prev = 1;
	unsigned long int nxt = 2;
	unsigned long int l = 1000000000;
	unsigned long int prev1;
	unsigned long int prev2;
	unsigned long int nxt1;
	unsigned long int nxt2;

	printf("%lu", prev);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", nxt);
		nxt += prev;
		prev = nxt - prev;
	}

	prev1 = (prev / l);
	prev2 = (prev % l);
	nxt1 = (nxt / l);
	nxt2 = (nxt % l);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", nxt1 + (nxt2 / l));
		printf("%lu", nxt2 % l);
		nxt1 = nxt1 + prev1;
		prev1 = nxt1 - prev1;
		nxt2 = nxt2 + prev2;
		prev2 = nxt2 - prev2;
	}
	printf("\n");
	return (0);
}
