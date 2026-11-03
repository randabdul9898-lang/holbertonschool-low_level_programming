#include <stdio.h>

/**
 * main - Prints hexadecimal digits in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;
	char letter;

	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');
	}

	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
