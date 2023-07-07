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
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
