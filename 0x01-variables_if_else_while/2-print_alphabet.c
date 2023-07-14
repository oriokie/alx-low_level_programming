#include <stdio.h>
/**
  *main - Main Block
  *Description: Lets output letters using putchar
  *Return: 0 as success
  */

int main(void)
{
		char letter = 'a';

		while (letter <= 'z')
		{
				putchar(letter);
				letter++;
		}

		putchar('\n');

		return (0);
}
