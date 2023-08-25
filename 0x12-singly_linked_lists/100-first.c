#include <stdio.h>

/**
 * pre_main - function that executes before the main function is executed
 * Return: void.
 */

void __attribute__ ((constructor)) pre_main(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
