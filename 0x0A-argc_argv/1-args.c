# include <stdio.h>

/**
 * main - entry point
 *
 * @argc: counter of argument
 *
 * @argv: value of arguments
 *
 * Return: 0 success
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
