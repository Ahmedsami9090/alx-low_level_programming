#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a program for
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
}
