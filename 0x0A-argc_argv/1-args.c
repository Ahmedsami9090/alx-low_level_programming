# include <stdio.h>

/**
 * main - entry point
 *
 * argc: counter
 *
 * argv: value
 *
 * Return: 0 success
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
