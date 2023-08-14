#ifndef MY_DOG
#define MY_DOG
#include <stdio.h>
/**
 * print_dog - function that creates the struct
 * @d: the struct
 * Return: none
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
