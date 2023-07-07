# include <stdio.h>

/**
 * main - entry point
 *
 * @argv: argument value
 *
 * @argc: arg counter
 *
 * Return: 0 suceess
*/

int main(int argc, char const *argv[])
{
	int i;

	for (i = 0; i <= argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
