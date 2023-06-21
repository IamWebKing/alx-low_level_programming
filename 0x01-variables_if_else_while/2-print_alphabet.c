#include <stdio.h>
/**
 * main - print alphabets in lower case
 *
 * Return: Always (0)
 *
 */
int main(void)
{
	char alphabets = 'a';

	while (alphabets <= 'z')
	{
		putchar(alphabets);
		alphabets++;
	}
	putchar('\n');
	return (0);
}
