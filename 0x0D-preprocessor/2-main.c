#ifndef name
#define name __FILE__
#endif
#include <stdio.h>
/**
 * main - this program prints the name of the file it was compiled from.
 * Return: Always zero
 */
int main(void)
{
	printf("%s\n", name);
	return (0);
}
