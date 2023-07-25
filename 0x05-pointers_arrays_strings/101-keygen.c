#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* getRandomChar - generates password characters
* generatepass - generates password
* main - generates keygen
*/
char getRandomChar(void)
{
	return ('A' + rand() % 26);
}

void generatepass(int length)
{
	int i;

	for ( = 0; i < length; i++)
	{
		printf("%c", getRandomChar());
	}
	printf("\n");
}

int main(void)
{
	int passwordLength = 15;

	srand((unsigned int)time(NULL));
	generatepass(passwordLength);
	return (0);
}
